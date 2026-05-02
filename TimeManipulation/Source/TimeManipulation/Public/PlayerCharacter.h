#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"
USTRUCT()
struct FTimeSnapshot
{
	GENERATED_BODY(EBlueprintType)

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

	UPROPERTY()
	TArray<FTimeSnapshot> TimeBuffer;
	//How often the player position and rotation is recorded
	UPROPERTY(EditAnywhere, Category = "Rewind")
	float RecordInterval = 0.2f;
	// Maximum time that can be recorded in seconds
	UPROPERTY(EditAnywhere, Category = "Rewind")
	float MaxRecordTime = 5.0f;

protected:

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TimeSkip")
	float SkipDistanceMultiplier = 0.5f;

	void MoveForward(float InputValue);
	void MoveRight(float InputValue);

	void Turn(float InputValue);
	void LookUp(float InputValue);


	void RecordPositions(float DeltaTime);
	void HandleRewind();
	void StartRewind();
	void StopRewind();



	// How many ticks to wait between rewind steps
	UPROPERTY(EditAnywhere, Category = "Rewind")
	int32 RewindTickInterval = 5;

	// Internal counter
	int32 RewindTickCounter = 0;

	bool bIsRewinding = false;

	float RecordTimer = 0.0f;

	void TeleportForward();

};
