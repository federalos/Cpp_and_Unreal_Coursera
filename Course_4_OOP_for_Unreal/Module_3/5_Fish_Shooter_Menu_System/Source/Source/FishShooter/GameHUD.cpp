// Copyright A.T. Chamillard. All Rights Reserved.


#include "GameHUD.h"

#include "Kismet/GameplayStatics.h"
#include "FishShooterSaveGame.h"

/**
 * Sets default values for this hud's properties
*/
AGameHUD::AGameHUD()
{
	// try to load saved number of kills
	SaveGameInstance = Cast<UFishShooterSaveGame>(
			UGameplayStatics::LoadGameFromSlot(
				"FishShooterSaveSlot", 0));
	if (SaveGameInstance != nullptr)
	{
		Kills = SaveGameInstance->NumKills;
	}
	else
	{
		// couldn't load saved game
		Kills = 0;
		SaveGameInstance = Cast<UFishShooterSaveGame>(
			UGameplayStatics::CreateSaveGameObject(
				UFishShooterSaveGame::StaticClass()));
	}

	// development use only; reset saved numkills to 0
	// comment out when not needed
	//SaveGameInstance->NumKills = 0;
	//UGameplayStatics::SaveGameToSlot(SaveGameInstance,
	//	"FishShooterSaveSlot", 0);
}

/**
 * Draws the HUD
*/
void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	// draw kills
	DrawText(KillLabel + FString::FromInt(Kills),
		FLinearColor::White,
		LeftOffset, TopOffset, HudFont);
}

/**
 * Adds a kill to the kill count
*/
void AGameHUD::AddKill()
{
	Kills++;

	// save number of kills
	SaveGameInstance->NumKills = Kills;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance,
		"FishShooterSaveSlot", 0);
}