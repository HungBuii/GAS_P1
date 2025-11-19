// Copyright Hungne

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"


class UAbilitySystemComponent;
class UAttributeSet;


UCLASS()
class AURA_API ACharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();
	
	// Returns the ability system component to use for this actor - derived from "IAbilitySystemInterface"
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override; 
	
	// Returns the AttributeSet of this actor
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
	
	/* Gameplay Ability System */
	UPROPERTY()
    TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;
	
	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;
};
