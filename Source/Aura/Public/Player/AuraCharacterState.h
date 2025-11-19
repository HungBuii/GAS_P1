// Copyright Hungne

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "AuraCharacterState.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;


UCLASS()
class AURA_API AAuraCharacterState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AAuraCharacterState();
	
	// Returns the ability system component to use for this actor - derived from "IAbilitySystemInterface"
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override; 
	
	// Returns the AttributeSet of this actor
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }
	
protected:
	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
