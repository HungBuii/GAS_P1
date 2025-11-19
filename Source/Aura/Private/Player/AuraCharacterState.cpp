// Copyright Hungne


#include "Player/AuraCharacterState.h"

#include "GAS/CharacterAbilitySystemComponent.h"
#include "GAS/CharacterAttributeSet.h"

AAuraCharacterState::AAuraCharacterState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UCharacterAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UCharacterAttributeSet>("AttributeSet");
	
	SetNetUpdateFrequency(100);
}

UAbilitySystemComponent* AAuraCharacterState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
