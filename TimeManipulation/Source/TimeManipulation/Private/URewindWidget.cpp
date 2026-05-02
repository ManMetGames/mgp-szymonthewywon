#include "URewindWidget.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

void URewindWidget::NativeConstruct()
{
    Super::NativeConstruct();

    PlayerRef = Cast<APlayerCharacter>(
        UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)
    );
}
float URewindWidget::GetRewindPercent() const
{
    if (!PlayerRef) // if cant find player the bar displays 0
    {
        return 0.f;
    }
    int32 MaxSnapshots = (PlayerRef->MaxRecordTime) / (PlayerRef->RecordInterval);
    if (MaxSnapshots <= 0)// if the maximum amount of snapshots is 0 bar is set to 0 so u can temporarily disable the rewind
    {
        return 0.f;
    }
    return (float) PlayerRef->TimeBuffer.Num() / (float)MaxSnapshots;
}