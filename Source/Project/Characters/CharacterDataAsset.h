#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Cards/CardTypes.h"
#include "CharacterDataAsset.generated.h"

class APartyCharacter;

UCLASS(BlueprintType)
class PROJECT_API UCharacterDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Identity") FName CharacterID;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Identity") FText DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Stats", meta=(ClampMin=1)) int32 MaxHP = 80;

    /** 이 캐릭터가 덱에 기여하는 카드 ID들 */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Deck") TArray<FName> StartingCardIDs;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Visual") TSoftObjectPtr<UTexture2D> Portrait;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Visual") TSoftClassPtr<APartyCharacter> CharacterActorClass;
};
