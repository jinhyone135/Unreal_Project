# 풀 사양 코드 적용 가이드

## 1. 폴더 복사

이 zip의 `Source/Project/` 안의 6개 폴더를 친구 프로젝트의 동일 위치로 복사:

```
[프로젝트]/Source/Project/
├── Cards/        ← 추가
├── Characters/   ← 추가
├── Combat/       ← 추가
├── Map/          ← 추가
├── Run/          ← 추가
└── Shop/         ← 추가
```

기존 친구의 `BattleManager.h/cpp`는 **그대로 두세요**. 다른 클래스라 충돌 없음.

## 2. Project.Build.cs 수정

UMG 의존성 추가 (UI 위젯용):

```csharp
PublicDependencyModuleNames.AddRange(new string[] {
    "Core", "CoreUObject", "Engine", "InputCore",
    "UMG"   // 추가
});

PrivateDependencyModuleNames.AddRange(new string[] {
    "Slate", "SlateCore"   // 주석 해제
});
```

## 3. 빌드

1. 언리얼 에디터 닫기
2. `Project.uproject` 우클릭 → **Generate Visual Studio project files**
3. `Project.sln` 열고 **솔루션 빌드** (Ctrl+Shift+B)
4. `Project.uproject` 더블클릭으로 에디터 실행

## 4. 친구 캐릭터 부모 클래스 변경 (가장 중요)

레벨에 박혀있는 캐릭터 BP 각각:

- **왼쪽 학생들 BP** 열기 → Class Settings → **Parent Class를 `PartyCharacter`로 변경**
- **오른쪽 적들 BP** 열기 → Class Settings → **Parent Class를 `EnemyBase`로 변경**

부모 변경 시 컴파일 → BP에 빨간 에러 뜰 수 있어요. 그땐 충돌 컴포넌트만 제거하고 다시 컴파일.

각 학생 BP의 디테일 패널에서 **CharacterID** 프로퍼티를 호시노→`Hoshino`, 시로코→`Shiroko` 식으로 입력. 이 ID로 카드 시스템과 연결됩니다.

## 5. 에디터에서 만들 것들

### A) GameInstance BP
- 콘텐츠 브라우저 → BP 생성 → Parent Class = `BAGameInstance`
- 이름: `BP_BAGameInstance`
- 디테일에서:
  - `CardDataTable`: 곧 만들 DT_Cards
  - `AllCharacters`: 곧 만들 DA_Hoshino 등
- Project Settings → Maps & Modes → **Game Instance Class = BP_BAGameInstance**

### B) DataTable: DT_Cards
- 콘텐츠 브라우저 → Miscellaneous → DataTable
- Row Structure: **CardDataRow** 선택
- 5개 행 추가 (예시):

| Row Name | DisplayName | Cost | CardType | TargetType | BaseValue | OwnerCharacterID | EffectClasses |
|---|---|---|---|---|---|---|---|
| Hoshino_01 | 호시노 | 3 | Defense | None | 10 | Hoshino | DefenseEffect |
| Shiroko_01 | 시로코 | 3 | Attack | SingleEnemy | 20 | Shiroko | DamageEffect |
| Ayame_01 | 아야메 | 2 | Heal | None | 10 | Ayame | HealEffect |
| Serika_01 | 세리카 | 2 | Buff | None | 50 | Serika | DamageBuffEffect |
| Nonomi_01 | 노노미 | 0 | Utility | None | 2 | Nonomi | CostRefundEffect |

### C) CharacterDataAsset 5개
- 콘텐츠 브라우저 → Miscellaneous → Data Asset → Class = `CharacterDataAsset`
- `DA_Hoshino`, `DA_Shiroko`, `DA_Ayame`, `DA_Serika`, `DA_Nonomi`
- 각각:
  - `CharacterID`: Hoshino/Shiroko/...
  - `School`: 적절히 (호시노=Abydos 등)
  - `MaxHP`: 80
  - `StartingCardIDs`: 자기 카드 ID 1~2개 (예: `[Hoshino_01]`)
- 다 만든 다음 BP_BAGameInstance의 AllCharacters 배열에 5개 다 넣기

### D) GameMode BP
- Parent Class = `CombatGameMode`
- 이름: `BP_CombatGameMode`
- BootstrapMode = **UseExistingActors** (기본값, 친구 캐릭터 그대로 활용)
- 친구의 전투 레벨의 World Settings에서 GameMode를 이걸로 지정

## 6. 모션 적용

각 캐릭터 BP의 이벤트 그래프에서:

- `Event On Play Card Anim` → Switch on ECardType → 각 분기에 **Play Anim Montage**
- `Event On Hit React` → 피격 몽타주 재생
- `Event On Death` → 사망 몽타주 재생

AnimBlueprint의 AnimGraph에 **Slot 'DefaultSlot'** 노드가 끼워져 있어야 몽타주가 재생됩니다 (Output Pose 직전에).

적도 동일: `Event On Attack Anim`, `Event On Hit React`, `Event On Death`.

## 7. 테스트 절차

마감 시간 고려해서 단계적으로:

1. **컴파일 성공** 확인 (실패 시 에러 메시지 보내주세요)
2. **친구 전투 레벨에서 PIE 실행** — 부트스트랩 로그 확인
3. **GameInstance + DataTable 연결 후** 카드 시스템 테스트
4. **UMG로 손패/HP UI** 입히기 (이건 BP 작업)
5. **맵/상점**은 마감 여유 있을 때

## 자주 막히는 점

**컴파일 에러 "X 클래스를 찾을 수 없음"**
- 헤더 include 경로 확인. 이 코드는 `Cards/...`, `Combat/...` 식으로 폴더 prefix 사용

**부모 클래스 변경 시 BP 깨짐**
- 기존 컴포넌트와 새 부모의 변수 충돌. Class Settings에서 변수 정리.

**카드를 사용해도 효과가 없음**
- 카드의 OwnerCharacterID가 레벨 캐릭터의 CharacterID와 일치하는지 확인
- DataTable의 EffectClasses가 비어있으면 효과 없음

**모션이 재생 안 됨**
- AnimBlueprint AnimGraph에 Slot 노드 있는지 확인
- Montage의 Slot 이름이 AnimGraph Slot 이름과 일치하는지

문제 생기면 에러 메시지 + 어느 단계에서 막혔는지 알려주세요.
