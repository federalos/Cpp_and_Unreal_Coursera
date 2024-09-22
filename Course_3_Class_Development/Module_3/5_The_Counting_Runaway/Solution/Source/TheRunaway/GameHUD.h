// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GameHUD.generated.h"

/**
 * The HUD
 */
UCLASS()
class THERUNAWAY_API AGameHUD : public AHUD
{
	GENERATED_BODY()

private:
	const int LeftOffset{ 75 };
	const int TopOffset{ 50 };
	const FString EscapesLabel{ "Escapes: " };
	int Escapes{ 0 };

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		Category = HUDFont)
		UFont* HudFont;

	/**
	 * Draws the HUD
	*/
	virtual void DrawHUD() override;

	/**
	 * Adds an escape to the escape count
	*/
	void AddEscape();
};

