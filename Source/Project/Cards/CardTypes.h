#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CardTypes.generated.h"

class UCardEffect;
class ACombatManager;
class APartyCharacter;

UENUM(BlueprintType)
enum class ECardType : uint8
{
    Attack      UMETA(DisplayName = "공격"),
    Defense     UMETA(DisplayName = "방어"),
    Heal        UMETA(DisplayName = "힐"),
    Buff        UMETA(DisplayName = "버프"),
    Utility     UMETA(DisplayName = "유틸리티")
};

UENUM(BlueprintType)
enum class ETargetType : uint8
{
    None,
    SingleEnemy,
    AllEnemies,
    SelfParty,
    SingleAlly
};

USTRUCT(BlueprintType)
struct FCardDataRow : public FTableRowBase
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName CardID;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText DisplayName;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(MultiLine=true)) FText Description;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(ClampMin=0)) int32 Cost = 1;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ECardType CardType = ECardType::Attack;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ETargetType TargetType = ETargetType::None;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BaseValue = 0.f;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName OwnerCharacterID;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<TSubclassOf<UCardEffect>> EffectClasses;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName UpgradedCardID;
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftObjectPtr<UTexture2D> CardArt;
};

USTRUCT(BlueprintType)
struct FCombatContext
{
    GENERATED_BODY()

    UPROPERTY() TObjectPtr<ACombatManager> CombatManager = nullptr;
    UPROPERTY() TObjectPtr<APartyCharacter> Caster = nullptr;
    UPROPERTY() TObjectPtr<AActor> Target = nullptr;
    UPROPERTY() float EffectiveValue = 0.f;
};
