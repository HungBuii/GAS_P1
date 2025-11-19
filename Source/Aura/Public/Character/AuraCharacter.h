// Copyright Hungne

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterBase.h"
#include "AuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public ACharacterBase
{
	GENERATED_BODY()
	
public:
	AAuraCharacter();
	
	// Called when this Pawn is possessed. Only called on the server (or in standalone).
	virtual void PossessedBy(AController* NewController) override;
	// PlayerState Replication Notification Callback
	virtual void OnRep_PlayerState() override;
	
private:
	void InitAbilityActorInfo();
};
