#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cards/CardTypes.h"
#include "CardBase.generated.h"

class UCardEffect;
class APartyCharacter;
class UTexture2D;

UCLASS(BlueprintType)
class PROJECT_API UCardBase : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable) void InitFromData(const FCardDataRow& InData);
    UFUNCTION(BlueprintCallable) void SetOwnerCharacter(APartyCharacter* InOwner);

    UFUNCTION(BlueprintCallable) bool CanBePlayed(const FCombatContext& Context) const;
    UFUNCTION(BlueprintCallable) void Play(UPARAM(ref) FCombatContext& Context);

    // 강화 적용 — 값을 1.5배로 "고정"한다 (BaseValue + 효과 자체 필드).
    // 이미 강화된 카드는 무시 (카드당 1회). MasterDeck::MaterializeForCombat 가 호출.
    UFUNCTION(BlueprintCallable) void ApplyUpgrade();

    // 강화 시도 — 이미 강화된 카드는 false 반환 (카드당 1회 제한). 성공 시 ApplyUpgrade 수행.
    UFUNCTION(BlueprintCallable) bool TryUpgrade();

    // 강화 상태 setter (BP 호환) — true 면 ApplyUpgrade 호출
    UFUNCTION(BlueprintCallable) void SetUpgraded(bool bInUpgraded);

    UFUNCTION(BlueprintPure) int32 GetCost() const { return Data.Cost; }
    UFUNCTION(BlueprintPure) ECardType GetCardType() const { return Data.CardType; }
    UFUNCTION(BlueprintPure) ETargetType GetTargetType() const { return Data.TargetType; }
    UFUNCTION(BlueprintPure) FName GetCardID() const { return Data.CardID; }
    UFUNCTION(BlueprintPure) FName GetOwnerCharacterID() const { return Data.OwnerCharacterID; }
    UFUNCTION(BlueprintPure) const FCardDataRow& GetData() const { return Data; }
    UFUNCTION(BlueprintPure) bool IsUpgraded() const { return bUpgraded; }

    // 현재 표시할 카드 일러스트 반환 — 강화 상태면 UpgradedCardArt, 아니면(또는 미지정 시) CardArt
    UFUNCTION(BlueprintPure) UTexture2D* GetDisplayCardArt() const;

    // 강화 시 적용되는 배수 — 1.5배. 필요 시 BP에서도 조회 가능
    UFUNCTION(BlueprintPure) static float GetUpgradeMultiplier() { return 1.5f; }

protected:
    UPROPERTY(BlueprintReadOnly) FCardDataRow Data;
    UPROPERTY() TArray<TObjectPtr<UCardEffect>> Effects;
    UPROPERTY() TWeakObjectPtr<APartyCharacter> OwnerCharacter;

    // 강화 여부 — Play() 호출 시 EffectiveValue 에 1.5배 적용 결정
    UPROPERTY(BlueprintReadOnly) bool bUpgraded = false;
};
