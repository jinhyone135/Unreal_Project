#include "Characters/PartyCharacter.h"
#include "Characters/CharacterDataAsset.h"
#include "Components/SkeletalMeshComponent.h"

APartyCharacter::APartyCharacter()
{
    PrimaryActorTick.bCanEverTick = false;

    MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    SetRootComponent(MeshComponent);
}

void APartyCharacter::InitFromData(const UCharacterDataAsset* Data)
{
    if (!Data) return;
    CharacterID = Data->CharacterID;
}

// ? 여기 형식을 (ECardType CardType)으로 맞춰주기
void APartyCharacter::OnPlayCardAnim_Implementation(ECardType CardType) {}
void APartyCharacter::OnHitReact_Implementation() {}
void APartyCharacter::OnDeath_Implementation() {}
void APartyCharacter::OnHealed_Implementation() {}