#include "Map/MapGameMode.h"
#include "Run/BAGameInstance.h"
#include "Run/RunState.h"
#include "Kismet/GameplayStatics.h"

bool AMapGameMode::NavigateToNode(int32 NodeID)
{
    UBAGameInstance* GI = GetGameInstance<UBAGameInstance>();
    if (!GI || !GI->CurrentRun) return false;
    if (!GI->CurrentRun->NavigateToNode(NodeID)) return false;

    const ENodeType Type = GI->CurrentRun->GetCurrentNodeType();
    switch (Type)
    {
    case ENodeType::Combat:
    case ENodeType::Boss:
        UGameplayStatics::OpenLevel(this, CombatLevelName); return true;
    case ENodeType::Shop:
        UGameplayStatics::OpenLevel(this, ShopLevelName); return true;
    default:
        return false;
    }
}
