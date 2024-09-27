// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "FishShooterSaveGame.h"

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * The HUD
 */
UCLASS()
class FISHSHOOTER_API AGameHUD : public AHUD
{
	GENERATED_BODY()

private:
	const int LeftOffset{ 75 };
	const int TopOffset{ 50 };
	const FString KillLabel{ "Kills: " };
	int Kills{ 0 };

	// saved for efficiency
	UFishShooterSaveGame* SaveGameInstance;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		Category = HUDFont)
		UFont* HudFont;

	/**
	 * Sets default values for this hud's properties
	*/
	AGameHUD();

	/**
	 * Draws the HUD
	*/
	virtual void DrawHUD() override;

	/**
	 * Adds a kill to the kill count
	*/
	void AddKill();
};
