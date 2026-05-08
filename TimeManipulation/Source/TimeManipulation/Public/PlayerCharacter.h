#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"
USTRUCT(BlueprintType)
struct FTimeSnapshot
{
	GENERATED_BODY()

	FVector Location;
	FRotator Rotation;
};
UCLASS()
class TIMEMANIPULATION_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	

public: //accessed externally

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Rewind")
	TArray<FTimeSnapshot> TimeBuffer;
	//How often the player position and rotation is recorded
	UPROPERTY(EditAnywhere, Category = "Rewind")
	float RecordInterval = 0.2f;
	// Maximum time that can be recorded in seconds
	UPROPERTY(EditAnywhere, Category = "Rewind")
	float MaxRecordTime = 5.0f;
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> RewindWidgetClass;

protected:

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSkip")
	float SkipDistanceMultiplier = 0.5f;

	void MoveForward(float InputValue);
	void MoveRight(float InputValue);

	void Turn(float InputValue);
	void LookUp(float InputValue);

	// add DeltaTime float if handled in Tick
	void RecordPositions(float DeltaTime);
	void HandleRewind();
	void HandleFOVChange(float DeltaTime);
	void StartRewind();
	void StopRewind();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rewind|Camera")
	float NormalFOV = 90.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rewind|Camera")
	float RewindFOV = 120.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rewind|Camera")
	float FOVChangeSpeed = 5.0f;


	// How many ticks to wait between rewind steps
	UPROPERTY(EditAnywhere, Category = "Rewind")
	int32 RewindTickInterval = 5;

	// Internal counter
	int32 RewindTickCounter = 0;

	bool bIsRewinding = false;

	float RecordTimer = 0.0f;

	void TeleportForward();

};
