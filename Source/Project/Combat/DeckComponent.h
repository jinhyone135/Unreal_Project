#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DeckComponent.generated.h"

class UCardBase;

UCLASS(ClassGroup=(Combat), meta=(BlueprintSpawnableComponent))
class PROJECT_API UDeckComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UDeckComponent();

    UFUNCTION(BlueprintCallable)
    void InitializePiles(const TArray<UCardBase*>& StartingCards);

    UFUNCTION(BlueprintCallable) void ShuffleDrawPile();
    UFUNCTION(BlueprintCallable) void DrawCards(int32 Count);
    UFUNCTION(BlueprintCallable) void DiscardCard(UCardBase* Card);
    UFUNCTION(BlueprintCallable) void DiscardHand();

    UFUNCTION(BlueprintPure) TArray<UCardBase*> GetHand() const;
    // 덱 뷰어 UI 용 — 드로우 더미 / 버린 더미 카드 배열 반환
    UFUNCTION(BlueprintPure) TArray<UCardBase*> GetDrawPile() const;
    UFUNCTION(BlueprintPure) TArray<UCardBase*> GetDiscardPile() const;
    UFUNCTION(BlueprintPure) int32 GetHandSize() const { return Hand.Num(); }
    UFUNCTION(BlueprintPure) int32 GetDrawPileSize() const { return DrawPile.Num(); }
    UFUNCTION(BlueprintPure) int32 GetDiscardPileSize() const { return DiscardPile.Num(); }

protected:
    UPROPERTY() TArray<TObjectPtr<UCardBase>> DrawPile;
    UPROPERTY() TArray<TObjectPtr<UCardBase>> Hand;
    UPROPERTY() TArray<TObjectPtr<UCardBase>> DiscardPile;

    void ReshuffleDiscardIntoDraw();
};
