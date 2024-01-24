// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ActorAndPawnGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTACTORS_API AActorAndPawnGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	
};
