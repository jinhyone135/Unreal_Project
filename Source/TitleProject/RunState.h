#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MasterDeck.h"
#include "RunState.generated.h"

UCLASS(BlueprintType, Blueprintable)
class TITLEPROJECT_API URunState : public UObject
{
    GENERATED_BODY()

public:
    URunState();

    // 이번 판의 핵심 스탯
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 CurrentHP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 MaxHP;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 Gold;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Run State")
    int32 CurrentFloor;

    // MasterDeck에 대한 포인터 (UE5 권장 방식인 TObjectPtr 사용)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Run State")
    TObjectPtr<UMasterDeck> MasterDeck;

    // 런 시작 시 초기값 세팅
    UFUNCTION(BlueprintCallable, Category = "Run State")
    void InitializeRun(int32 StartHP, int32 StartGold);
};