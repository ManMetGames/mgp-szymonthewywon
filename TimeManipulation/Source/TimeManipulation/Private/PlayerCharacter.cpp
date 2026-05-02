#include "PlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Blueprint/UserWidget.h"

APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Camera = CreateDefaultSubobject<UCameraComponent>("PlayerCamera");
	Camera->SetupAttachment(RootComponent);
	Camera->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

    if (RewindWidgetClass)
    {
        UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), RewindWidgetClass);
        if (Widget)
        {
            Widget->AddToViewport();
        }
    }
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    RecordPositions(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAxis("MoveForward", this, &APlayerCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);

	PlayerInputComponent->BindAxis("TurnCamera", this, &APlayerCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookUp);

    PlayerInputComponent->BindAction("Rewind", IE_Pressed, this, &APlayerCharacter::StartRewind);
    PlayerInputComponent->BindAction("Rewind", IE_Released, this, &APlayerCharacter::StopRewind);
	PlayerInputComponent->BindAction("Teleport", IE_Pressed, this, &APlayerCharacter::TeleportForward);
}
void APlayerCharacter::MoveForward(float InputValue)
{
	FVector ForwardDirection = GetActorForwardVector();
	AddMovementInput(ForwardDirection, InputValue);
}

void APlayerCharacter::MoveRight(float InputValue)
{
	FVector RightDirection = GetActorRightVector();
	AddMovementInput(RightDirection, InputValue);
}

void APlayerCharacter::Turn(float InputValue)
{
	AddControllerYawInput(InputValue);
}

void APlayerCharacter::LookUp(float InputValue)
{
	AddControllerPitchInput(InputValue);
}

void APlayerCharacter::HandleRewind()
{
    if (TimeBuffer.Num() <= 0)
    {
        bIsRewinding = false;
        return;
    }
    RewindTickCounter++;
    // Only rewind every X frames 
    if (RewindTickCounter < RewindTickInterval)
    {
        return;
    }
    RewindTickCounter = 0;

    // Apply snapshot
    FTimeSnapshot Snapshot = TimeBuffer.Last();
    TimeBuffer.RemoveAt(TimeBuffer.Num() - 1);

    SetActorLocation(Snapshot.Location);
    SetActorRotation(Snapshot.Rotation);
}

void APlayerCharacter::RecordPositions(float DeltaTime) {
    if (!bIsRewinding)
    {
        RecordTimer += DeltaTime;

        if (RecordTimer >= RecordInterval)
        {
            RecordTimer = 0.0f;

            FTimeSnapshot Snapshot;
            Snapshot.Location = GetActorLocation();
            Snapshot.Rotation = GetActorRotation();

            TimeBuffer.Add(Snapshot);

            // Limit buffer size (5 seconds worth)
            int32 MaxSnapshots = MaxRecordTime / RecordInterval;
            if (TimeBuffer.Num() > MaxSnapshots)
            {
                TimeBuffer.RemoveAt(0);
            }
        }
    }
    else
    {
        HandleRewind();
    }
}

void APlayerCharacter::StartRewind()
{
    bIsRewinding = true;
}

void APlayerCharacter::StopRewind()
{
    bIsRewinding = false;
}

void APlayerCharacter::TeleportForward()
{
	FVector Velocity = GetVelocity();
	float Speed = Velocity.Size();

	if (Speed <= 0.0f)
	{
		return; // don't teleport if not moving
	}

	// Normalize velocity
	FVector Direction = Velocity.GetSafeNormal();
	float TeleportDistance = Speed * SkipDistanceMultiplier; // multiplier controls how far you go
	FVector NewLocation = GetActorLocation() + Direction * TeleportDistance;
	SetActorLocation(NewLocation, true); // true = prevents clipping through walls
}

