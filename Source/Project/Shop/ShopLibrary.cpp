#include "Shop/ShopLibrary.h"
#include "Run/BAGameInstance.h"
#include "Run/RunState.h"
#include "Run/MasterDeck.h"
#include "Kismet/GameplayStatics.h"

// 1.docx 기준 상점 가격 정책:
//  - 카드 구매: 75 고정 (등급별 차등은 추후 카드 데이터에 가격 필드 추가 시 확장)
//  - 카드 강화: 60 고정 (방문 횟수 무관)
//  - 카드 삭제: 첫 50, 이후 사용할 때마다 +25 누적
static constexpr int32 BASE_PURCHASE = 75;
static constexpr int32 BASE_REMOVAL  = 50;
static constexpr int32 BASE_UPGRADE  = 60;
static constexpr int32 REMOVAL_INCREMENT = 25;

int32 UShopLibrary::GetCardPurchasePrice(UBAGameInstance* /*GI*/)
{
    return BASE_PURCHASE;
}
int32 UShopLibrary::GetCardRemovalPrice(UBAGameInstance* GI)
{
    if (!GI || !GI->CurrentRun) return BASE_REMOVAL;
    return BASE_REMOVAL + REMOVAL_INCREMENT * GI->CurrentRun->CardRemovalsUsed;
}
int32 UShopLibrary::GetCardUpgradePrice(UBAGameInstance* /*GI*/)
{
    return BASE_UPGRADE;
}

TArray<FName> UShopLibrary::RollPurchaseOptions(UBAGameInstance* GI, int32 Count)
{
    TArray<FName> Result;
    if (!GI) return Result;

    // 상점 매물 풀 = GI의 StarterCardPool (시작 덱 풀과 동일)
    TArray<FName> Pool = GI->StarterCardPool;
    for (int32 i = Pool.Num() - 1; i > 0; --i)
    {
        const int32 j = FMath::RandRange(0, i);
        Pool.Swap(i, j);
    }

    const int32 Take = FMath::Min(Count, Pool.Num());
    Result.Reserve(Take);
    for (int32 i = 0; i < Take; ++i) Result.Add(Pool[i]);
    return Result;
}

bool UShopLibrary::BuyCard(UBAGameInstance* GI, FName CardID)
{
    if (!GI || !GI->CurrentRun || !GI->CurrentRun->MasterDeck) return false;
    if (!GI->CurrentRun->SpendGold(GetCardPurchasePrice(GI))) return false;
    GI->CurrentRun->MasterDeck->AddCard(CardID);
    return true;
}

bool UShopLibrary::RemoveCardAt(UBAGameInstance* GI, int32 MasterDeckIndex)
{
    if (!GI || !GI->CurrentRun || !GI->CurrentRun->MasterDeck) return false;
    const int32 Price = GetCardRemovalPrice(GI);
    if (GI->CurrentRun->Gold < Price) return false;
    if (!GI->CurrentRun->MasterDeck->RemoveCardAt(MasterDeckIndex)) return false;
    GI->CurrentRun->SpendGold(Price);
    GI->CurrentRun->CardRemovalsUsed++;
    return true;
}

bool UShopLibrary::UpgradeCardAt(UBAGameInstance* GI, int32 MasterDeckIndex)
{
    if (!GI || !GI->CurrentRun || !GI->CurrentRun->MasterDeck || !GI->CardDataTable)
        return false;

    URunState* Run = GI->CurrentRun;
    const int32 Price = GetCardUpgradePrice(GI);

    if (Run->Gold < Price) return false;
    if (!Run->MasterDeck->UpgradeCardAt(MasterDeckIndex, GI->CardDataTable)) return false;

    Run->SpendGold(Price);
    return true;
}

void UShopLibrary::LeaveShop(const UObject* WorldContextObject, UBAGameInstance* GI,
                              FName MapLevelName)
{
    if (GI && GI->CurrentRun) GI->CurrentRun->ShopVisitsUsed++;
    UGameplayStatics::OpenLevel(WorldContextObject, MapLevelName);
}
