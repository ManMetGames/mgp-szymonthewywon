#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerCharacter.h"
#include "URewindWidget.generated.h"



UCLASS()
class TIMEMANIPULATION_API URewindWidget : public UUserWidget
{
    GENERATED_BODY()

public:

    virtual void NativeConstruct() override;

    UFUNCTION(BlueprintCallable, Category = "Rewind")
    float GetRewindPercent() const;

private:

    UPROPERTY()
    APlayerCharacter* PlayerRef;
};