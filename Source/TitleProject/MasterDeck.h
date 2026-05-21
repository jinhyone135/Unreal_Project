#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MasterDeck.generated.h"

UCLASS(BlueprintType, Blueprintable)
class TITLEPROJECT_API UMasterDeck : public UObject
{
    GENERATED_BODY()

public:
    // 현재 덱에 포함된 카드 ID 목록
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Deck Data")
    TArray<FName> CardIDs;

    // 블루프린트에서 쉽게 카드를 추가/제거할 수 있도록 헬퍼 함수 선언
    UFUNCTION(BlueprintCallable, Category = "Deck Data")
    void AddCardToDeck(FName NewCardID);

    UFUNCTION(BlueprintCallable, Category = "Deck Data")
    void RemoveCardFromDeck(FName CardIDToRemove);
};