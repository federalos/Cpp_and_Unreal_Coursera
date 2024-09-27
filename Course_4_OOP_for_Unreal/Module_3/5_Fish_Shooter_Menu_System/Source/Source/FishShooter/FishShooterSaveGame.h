// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FishShooterSaveGame.generated.h"

/**
 * Class for saving and retrieving gameplay data
 */
UCLASS()
class FISHSHOOTER_API UFishShooterSaveGame : public USaveGame
{
	GENERATED_BODY()
	
public:
	UPROPERTY(VisibleAnywhere, Category = "Saved Game Data")
		int NumKills;
};
