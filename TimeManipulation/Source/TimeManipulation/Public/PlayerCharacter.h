// Fill out your copyright notice in the Description page of Project Settings.

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

protected:

	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	void MoveForward(float InputValue);
	void MoveRight(float InputValue);

	void Turn(float InputValue);
	void LookUp(float InputValue);

	void RecordPositions(float DeltaTime);
	void HandleRewind();
	void StartRewind();
	void StopRewind();

	UPROPERTY()
	TArray<FTimeSnapshot> TimeBuffer;

	UPROPERTY(EditAnywhere, Category = "Rewind")
	float RecordInterval = 0.2f;

	UPROPERTY(EditAnywhere, Category = "Rewind")
	float MaxRecordTime = 5.0f;

	bool bIsRewinding = false;

	float RecordTimer = 0.0f;

};
