#include "Cards/CardEffects.h"
#include "Combat/CombatManager.h"
#include "Characters/PartyCharacter.h"

void UDamageEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    const float FinalDamage = Context.CombatManager->CalculateOutgoingDamage(
        Context.Caster, Context.EffectiveValue);
    // 단일 적 파티 HP에 데미지 (적은 한 덩어리로 취급)
    Context.CombatManager->DealDamageToEnemy(FMath::RoundToInt(FinalDamage));
}

void UDefenseEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    const int32 BlockAmount = FMath::RoundToInt(Context.EffectiveValue);
    Context.CombatManager->AddBlockToPlayer(BlockAmount);
}

void UHealEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    const int32 HealAmount = FMath::RoundToInt(Context.EffectiveValue);
    Context.CombatManager->HealPlayer(HealAmount);
}

void UDamageBuffEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    // DamagePercent 는 강화 시 ApplyUpgradeToValues 에서 이미 1.5배로 고정됨
    Context.CombatManager->ApplyPartyDamageBuff(DamagePercent, DurationTurns);
}

void UDamageBuffEffect::ApplyUpgradeToValues(float Multiplier)
{
    // 강화 시 데미지 증가량을 1.5배로 고정 (예: 10 → 15)
    DamagePercent *= Multiplier;
}

void UCostRefundEffect::Execute_Implementation(FCombatContext& Context)
{
    if (!Context.CombatManager) return;
    // RefundAmount 는 강화 시 ApplyUpgradeToValues 에서 이미 1.5배로 고정됨
    Context.CombatManager->AddCost(RefundAmount);
}

void UCostRefundEffect::ApplyUpgradeToValues(float Multiplier)
{
    // 강화 시 코스트 회복량을 1.5배로 고정 (예: 2 → 3)
    RefundAmount = FMath::RoundToInt(RefundAmount * Multiplier);
}
