// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UnrealDataTableGameModeBase.generated.h"

/**
 * Custom game mode
 */
UCLASS()
class UNREALDATATABLE_API AUnrealDataTableGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	/**
	 * Sets default values for this game mode's properties
	 */
	AUnrealDataTableGameModeBase();
};
