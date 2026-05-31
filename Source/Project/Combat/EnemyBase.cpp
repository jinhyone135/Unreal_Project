#include "Combat/EnemyBase.h"
#include "Combat/CombatManager.h"
#include "Characters/PartyCharacter.h"
#include "Components/SkeletalMeshComponent.h"

AEnemyBase::AEnemyBase()
{
    PrimaryActorTick.bCanEverTick = false;

    MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    SetRootComponent(MeshComponent);
}

void AEnemyBase::GenerateIntent(const TArray<APartyCharacter*>& /*PartyMembers*/)
{
    CurrentIntent = FEnemyIntent();

    if (FMath::FRand() > AttackChance)
    {
        CurrentIntent.Type = EEnemyIntentType::Defend;
        CurrentIntent.Amount = FMath::RandRange(DefendMin, DefendMax);
        return;
    }

    CurrentIntent.Type = EEnemyIntentType::Attack;
    CurrentIntent.Amount = FMath::RandRange(AttackMin, AttackMax);
}

void AEnemyBase::ExecuteIntent(ACombatManager* CombatManager)
{
    if (!CombatManager) return;

    switch (CurrentIntent.Type)
    {
    case EEnemyIntentType::Attack:
        OnAttackAnim();
        CombatManager->DealDamageToPlayer(CurrentIntent.Amount);
        break;

    case EEnemyIntentType::Defend:
        CombatManager->AddBlockToEnemy(CurrentIntent.Amount);
        break;

    default: break;
    }
}
