#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MapGameMode.generated.h"

UCLASS()
class PROJECT_API AMapGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, Category="Levels") FName CombatLevelName = TEXT("CombatLevel");
    UPROPERTY(EditDefaultsOnly, Category="Levels") FName ShopLevelName = TEXT("ShopLevel");
    UPROPERTY(EditDefaultsOnly, Category="Levels") FName TitleLevelName = TEXT("TitleLevel");

    UFUNCTION(BlueprintCallable)
    bool NavigateToNode(int32 NodeID);
};
