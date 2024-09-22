// Copyright A.T. Chamillard. All Rights Reserved.


#include "GameHUD.h"

/**
 * Draws the HUD
*/
void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	// draw escapes
	DrawText(EscapesLabel + FString::FromInt(Escapes),
		FLinearColor::White,
		LeftOffset, TopOffset, HudFont);
}

/**
 * Adds an escape to the escape count
*/
void AGameHUD::AddEscape()
{
	Escapes++;
}