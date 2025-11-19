// Copyright Hungne

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "CharacterAttributeSet.generated.h"


/**
 * Attribute Sets: Stores gameplay attributes such as Health, Mana, 
 *					Stamina, making it easy for the system to calculate and replicate.
 */


UCLASS()
class AURA_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UCharacterAttributeSet();
};
