#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EncounterDataAsset.generated.h"

class AEnemyBase;

UCLASS(BlueprintType)
class PROJECT_API UEncounterDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName EncounterID;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText DisplayName;
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<TSoftClassPtr<AEnemyBase>> EnemyClasses;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 BonusGold = 0;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsBoss = false;
};
