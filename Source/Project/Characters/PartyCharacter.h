#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cards/CardTypes.h"
#include "PartyCharacter.generated.h"

class UCharacterDataAsset;
class USkeletalMeshComponent;

UCLASS()
class PROJECT_API APartyCharacter : public AActor
{
    GENERATED_BODY()

public:
    APartyCharacter();

    UFUNCTION(BlueprintPure) FName GetCharacterID() const { return CharacterID; }

    UFUNCTION(BlueprintCallable)
    void InitFromData(const UCharacterDataAsset* Data);

    // ===== 모션 훅 (BP에서 PlayAnimMontage 등으로 구현) =====

    /** 자기 카드를 사용하는 순간 호출. CardType별로 분기 가능 */
    // BlueprintNativeEvent로 바꿔야 .cpp의 _Implementation이 작동
    UFUNCTION(BlueprintNativeEvent, Category="Animation")
    void OnPlayCardAnim(ECardType CardType);

    /** 파티가 데미지를 입은 순간 호출 */
    UFUNCTION(BlueprintNativeEvent, Category = "Animation")
    void OnHitReact();

    /** 파티 HP가 0이 된 순간 호출 */
    UFUNCTION(BlueprintNativeEvent, Category = "Animation")
    void OnDeath();

    /** 파티가 회복받은 순간 호출 */
    UFUNCTION(BlueprintNativeEvent, Category = "Animation")
    void OnHealed();

    /** 캐릭터의 시각/애니메이션 메시. BP에서 SkeletalMesh와 AnimClass를 지정 */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components")
    TObjectPtr<USkeletalMeshComponent> MeshComponent;

    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName CharacterID;
};
