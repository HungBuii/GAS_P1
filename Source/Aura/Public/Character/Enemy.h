// Copyright Hungne

#pragma once

#include "CoreMinimal.h"
#include "Character/CharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemy : public ACharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:
	AEnemy();
	
	//~ Enemy Interface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	//~ End Enemy Interface
	
protected:
	virtual void BeginPlay() override;
};
