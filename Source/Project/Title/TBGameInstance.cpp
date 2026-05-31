#include "TBGameInstance.h"

// 생성자에서 인스턴스 변수들의 초기 기본값을 세팅합니다.
UTBGameInstance::UTBGameInstance()
{
	CurrentNodeID = FName(TEXT("Node_Start"));
}

void UTBGameInstance::SaveTeamComposition(const TArray<FName>& InStrikers, FName InSupporter)
{
	// 블루프린트에서 전달받은 배열과 서포터 ID를 인스턴스 변수에 덮어씁니다.
	SelectedStrikers = InStrikers;
	SelectedSupporter = InSupporter;

	// 전달받은 배열의 길이를 언리얼 출력 로그 창에 빨간색으로 띄웁니다.
	UE_LOG(LogTemp, Error, TEXT("C++ Received Strikers Count: %d"), InStrikers.Num());
}

// --------------------------------------------------
// [신규 코드] 이번 판(Run) 진행 데이터 구현부
// --------------------------------------------------
void UTBGameInstance::StartNewRun()
{
	// 새로운 RunState 객체를 메모리에 생성 (GameInstance가 소유)
	CurrentRunState = NewObject<URunState>(this);

	// 테스트용 초기 세팅: 시작 체력 80, 시작 골드 99 (추후 기획에 맞게 변경 가능)
	CurrentRunState->InitializeRun(80, 99);
}

void UTBGameInstance::ClearRunState()
{
	// 포인터 연결을 끊어 언리얼 가비지 컬렉터(GC)가 알아서 지우도록 함
	CurrentRunState = nullptr;
}

bool UTBGameInstance::IsNodeCleared(FName NodeID) const
{
	// ClearedNodes 배열에 해당 노드 ID가 존재하는지 반환
	return ClearedNodes.Contains(NodeID);
}

void UTBGameInstance::CompleteCurrentNode()
{
	// 현재 노드가 등록되어 있고, 아직 클리어 목록에 없다면 추가
	if (CurrentNodeID != NAME_None && !ClearedNodes.Contains(CurrentNodeID))
	{
		ClearedNodes.Add(CurrentNodeID);
		UE_LOG(LogTemp, Log, TEXT("Node Cleared: %s"), *CurrentNodeID.ToString());
	}
}