#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyBase.generated.h"

class APartyCharacter;
class ACombatManager;
class USkeletalMeshComponent;

UENUM(BlueprintType)
enum class EEnemyIntentType : uint8
{
    Attack, Defend, Unknown
};

USTRUCT(BlueprintType)
struct FEnemyIntent
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly) EEnemyIntentType Type = EEnemyIntentType::Unknown;
    UPROPERTY(BlueprintReadOnly) int32 Amount = 0;
};

UCLASS()
class PROJECT_API AEnemyBase : public AActor
{
    GENERATED_BODY()

public:
    AEnemyBase();

    UFUNCTION(BlueprintCallable)
    void GenerateIntent(const TArray<APartyCharacter*>& PartyMembers);

    UFUNCTION(BlueprintCallable)
    void ExecuteIntent(ACombatManager* CombatManager);

    UFUNCTION(BlueprintPure) const FEnemyIntent& GetIntent() const { return CurrentIntent; }

    // ===== 모션 훅 =====
    UFUNCTION(BlueprintImplementableEvent, Category="Animation")
    void OnAttackAnim();

    UFUNCTION(BlueprintImplementableEvent, Category="Animation")
    void OnHitReact();

    UFUNCTION(BlueprintImplementableEvent, Category="Animation")
    void OnDeath();

    /** 적의 시각/애니메이션 메시. BP에서 SkeletalMesh와 AnimClass를 지정 */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
    TObjectPtr<USkeletalMeshComponent> MeshComponent;

    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName EnemyID;

    // 적 행동 파라미터 — Intent 생성 시 사용
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AttackMin = 6;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AttackMax = 10;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefendMin = 4;
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DefendMax = 8;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(ClampMin=0.f, ClampMax=1.f))
    float AttackChance = 0.75f;

protected:
    UPROPERTY(BlueprintReadOnly) FEnemyIntent CurrentIntent;
};
