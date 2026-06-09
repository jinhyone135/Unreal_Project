#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MasterDeck.generated.h"

class UCardBase;
class UDataTable;

UCLASS(BlueprintType)
class PROJECT_API UMasterDeck : public UObject
{
    GENERATED_BODY()

public:
    // 카드 추가 — 강화 플래그도 false로 함께 push (동기화 유지)
    UFUNCTION(BlueprintCallable) void AddCard(FName CardID);

    // 카드 제거 — CardIDs / UpgradedFlags 둘 다 제거
    UFUNCTION(BlueprintCallable) bool RemoveCardAt(int32 Index);

    // 카드 강화 — UpgradedFlags[Index] = true. 이미 강화된 카드는 false 반환 (1회 제한)
    UFUNCTION(BlueprintCallable) bool UpgradeCardAt(int32 Index);

    UFUNCTION(BlueprintPure) const TArray<FName>& GetCardIDs() const { return CardIDs; }
    UFUNCTION(BlueprintPure) const TArray<bool>& GetUpgradedFlags() const { return UpgradedFlags; }
    UFUNCTION(BlueprintPure) int32 Num() const { return CardIDs.Num(); }

    // 해당 인덱스 카드가 강화 상태인지 — 상점 UI / 카드 표시용
    UFUNCTION(BlueprintPure) bool IsUpgraded(int32 Index) const;

    // 전투 진입 시 호출 — 강화 플래그를 UCardBase 인스턴스에도 전달
    UFUNCTION(BlueprintCallable)
    TArray<UCardBase*> MaterializeForCombat(UObject* Outer, UDataTable* CardTable) const;

protected:
    UPROPERTY(BlueprintReadOnly) TArray<FName> CardIDs;

    // CardIDs 와 1:1 인덱스 매칭 — 같은 카드라도 인스턴스별로 강화 여부 다를 수 있음
    UPROPERTY(BlueprintReadOnly) TArray<bool> UpgradedFlags;
};
