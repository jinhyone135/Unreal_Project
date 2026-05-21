#include "RunState.h"

URunState::URunState()
{
    CurrentHP = 100;
    MaxHP = 100;
    Gold = 0;
    CurrentFloor = 1;
}

void URunState::InitializeRun(int32 StartHP, int32 StartGold)
{
    CurrentHP = StartHP;
    MaxHP = StartHP;
    Gold = StartGold;
    CurrentFloor = 1;

    // MasterDeck 메모리 할당 및 생성
    if (!MasterDeck)
    {
        // this를 Outer로 지정하여 RunState가 파괴될 때 같이 정리되도록 함
        MasterDeck = NewObject<UMasterDeck>(this);
    }

    // 시작 덱 초기화 로직 (예: 기본 공격카드 4장, 방어카드 4장 등)
    if (MasterDeck)
    {
        MasterDeck->CardIDs.Empty();
        // 예시: MasterDeck->AddCardToDeck(FName("Strike"));
    }
}