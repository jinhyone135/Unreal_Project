#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShopLibrary.generated.h"

class UBAGameInstance;

UCLASS()
class PROJECT_API UShopLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintPure, Category="Shop") static int32 GetCardPurchasePrice(UBAGameInstance* GI);
    UFUNCTION(BlueprintPure, Category="Shop") static int32 GetCardRemovalPrice(UBAGameInstance* GI);
    UFUNCTION(BlueprintPure, Category="Shop") static int32 GetCardUpgradePrice(UBAGameInstance* GI);

    UFUNCTION(BlueprintCallable, Category="Shop")
    static TArray<FName> RollPurchaseOptions(UBAGameInstance* GI, int32 Count = 5);

    UFUNCTION(BlueprintCallable, Category="Shop")
    static bool BuyCard(UBAGameInstance* GI, FName CardID);

    UFUNCTION(BlueprintCallable, Category="Shop")
    static bool RemoveCardAt(UBAGameInstance* GI, int32 MasterDeckIndex);

    UFUNCTION(BlueprintCallable, Category="Shop")
    static bool UpgradeCardAt(UBAGameInstance* GI, int32 MasterDeckIndex);

    UFUNCTION(BlueprintCallable, Category="Shop", meta=(WorldContext="WorldContextObject"))
    static void LeaveShop(const UObject* WorldContextObject, UBAGameInstance* GI,
                           FName MapLevelName = TEXT("MapLevel"));
};
