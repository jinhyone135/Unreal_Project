#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Run/RunState.h"
#include "Map/MapTypes.h" // 👈 추가하신 헤더는 반드시 여기에 위치해야 합니다!
#include "TBGameInstance.generated.h" // 👈 무조건 include 목록의 맨 마지막 줄!

UCLASS()
class PROJECT_API UTBGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	// 기본 생성자 (기본값 초기화용)
	UTBGameInstance();

	// --------------------------------------------------
	// [기존 코드] 팀 데이터 
	// --------------------------------------------------
	UPROPERTY(BlueprintReadWrite, Category = "Team Data")
	TArray<FName> SelectedStrikers;

	UPROPERTY(BlueprintReadWrite, Category = "Team Data")
	FName SelectedSupporter;

	UFUNCTION(BlueprintCallable, Category = "Team Data")
	void SaveTeamComposition(const TArray<FName>& InStrikers, FName InSupporter);

	// --------------------------------------------------
	// [기존 코드] 맵 진행 데이터
	// --------------------------------------------------
	// 아바타가 현재 서 있는 노드의 ID (헤더 초기화 제거)
	UPROPERTY(BlueprintReadWrite, Category = "Map Data")
	FName CurrentNodeID;

	// 전투를 완료하여 빈 땅이 된 노드들의 목록
	UPROPERTY(BlueprintReadWrite, Category = "Map Data")
	TArray<FName> ClearedNodes;

	// --------------------------------------------------
	// [신규 코드] 이번 판(Run) 진행 데이터
	// --------------------------------------------------
	// 현재 진행 중인 런의 데이터 포인터 (수명 주기 관리)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Run Data")
	TObjectPtr<URunState> CurrentRunState;

	// 새 게임(Run) 시작 시 호출
	UFUNCTION(BlueprintCallable, Category = "Run Data")
	void StartNewRun();

	// 게임 오버 혹은 클리어 시 호출하여 RunState 메모리 정리
	UFUNCTION(BlueprintCallable, Category = "Run Data")
	void ClearRunState();

	// [신규 추가] 특정 노드가 이미 클리어되었는지 확인하는 함수
	UFUNCTION(BlueprintPure, Category = "Map Data")
	bool IsNodeCleared(FName NodeID) const;

	// [신규 추가] 현재 진입했던 노드를 클리어 처리하는 함수
	UFUNCTION(BlueprintCallable, Category = "Map Data")
	void CompleteCurrentNode();
};