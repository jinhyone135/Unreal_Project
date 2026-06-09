#include "Cards/CardBase.h"
#include "Cards/CardEffect.h"
#include "Characters/PartyCharacter.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"

void UCardBase::InitFromData(const FCardDataRow& InData)
{
    Data = InData;
    Effects.Reset();
    for (TSubclassOf<UCardEffect> EffectClass : Data.EffectClasses)
    {
        if (!EffectClass) continue;
        UCardEffect* NewEffect = NewObject<UCardEffect>(this, EffectClass);
        if (NewEffect) Effects.Add(NewEffect);
    }
    // 새로 데이터로 초기화될 때 강화 상태는 기본값(false). 강화 적용은 ApplyUpgrade() 로 별도 호출
    bUpgraded = false;
}

void UCardBase::SetOwnerCharacter(APartyCharacter* InOwner)
{
    OwnerCharacter = TWeakObjectPtr<APartyCharacter>(InOwner);
}

bool UCardBase::CanBePlayed(const FCombatContext& /*Context*/) const
{
    // 단일 파티 HP 시스템 — 파티 HP 검사는 CombatManager가 담당
    return Data.Cost >= 0;
}

void UCardBase::Play(FCombatContext& Context)
{
    // 강화 카드는 ApplyUpgrade() 에서 이미 값이 1.5배로 "고정"됨 → 여기선 곱셈 없이 그대로 사용
    Context.EffectiveValue = Data.BaseValue;

    for (UCardEffect* Effect : Effects)
    {
        if (Effect) Effect->Execute(Context);
    }
}

void UCardBase::ApplyUpgrade()
{
    // 이미 강화된 카드는 중복 적용 금지 (카드당 1회) — 두 번 곱해 2.25배 되는 것 방지
    if (bUpgraded) return;
    bUpgraded = true;

    const float Mult = GetUpgradeMultiplier();  // 1.5

    // (1) BaseValue 기반 효과(Damage/Defense/Heal)용 — 기준값 자체를 1.5배로 고정
    Data.BaseValue *= Mult;

    // (2) 자체 수치 필드를 쓰는 효과(DamageBuff/CostRefund) — 효과별로 1.5배 고정
    for (UCardEffect* Effect : Effects)
    {
        if (Effect) Effect->ApplyUpgradeToValues(Mult);
    }
}

bool UCardBase::TryUpgrade()
{
    if (bUpgraded) return false;  // 이미 강화된 카드는 추가 강화 불가 (카드당 1회)
    ApplyUpgrade();
    return true;
}

void UCardBase::SetUpgraded(bool bInUpgraded)
{
    // BP 호환용 — 플래그만 켜는 게 아니라 값 고정까지 수행
    if (bInUpgraded) ApplyUpgrade();
}

UTexture2D* UCardBase::GetDisplayCardArt() const
{
    // 강화 카드면 강화 전용 일러스트 우선 사용 (지정돼 있을 때만)
    if (bUpgraded && !Data.UpgradedCardArt.IsNull())
    {
        return Data.UpgradedCardArt.LoadSynchronous();
    }
    // 그 외에는 기본 일러스트 (비강화 또는 강화 아트 미지정 시 fallback)
    return Data.CardArt.LoadSynchronous();
}
