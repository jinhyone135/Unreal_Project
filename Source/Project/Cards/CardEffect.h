#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Cards/CardTypes.h"
#include "CardEffect.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, DefaultToInstanced)
class PROJECT_API UCardEffect : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    void Execute(UPARAM(ref) FCombatContext& Context);
    virtual void Execute_Implementation(FCombatContext& Context) {}

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
    bool RequiresTarget() const;
    virtual bool RequiresTarget_Implementation() const { return false; }

    // 강화 시 자체 수치 필드를 Multiplier 배로 "고정"한다.
    // EffectiveValue 를 쓰는 효과(Damage/Defense/Heal)는 재정의 불필요 — 기본 빈 구현.
    // 자체 필드를 쓰는 효과(DamageBuff/CostRefund)만 재정의.
    virtual void ApplyUpgradeToValues(float Multiplier) {}
};
