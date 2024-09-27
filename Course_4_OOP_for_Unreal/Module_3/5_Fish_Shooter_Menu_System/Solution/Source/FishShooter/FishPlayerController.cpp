// Copyright A.T. Chamillard. All Rights Reserved.

#include "FishPlayerController.h"

#include "FishPawn.h"

/**
 * Called to bind functionality to input
*/
void AFishPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// set up movement key binding
	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal",
		this,
		&AFishPlayerController::MoveHorizontally);

	// set up shoot key binding
	InputComponent->BindAction("Shoot",
		EInputEvent::IE_Pressed, this,
		&AFishPlayerController::ShootFish);

	// set up pause key binding
	InputComponent->BindAction("PauseGame",
		EInputEvent::IE_Pressed, this,
		&AFishPlayerController::PauseGame);
}

/**
 * Moves the fish horizontally
 * @param input input on Horizontal axis
*/
void AFishPlayerController::MoveHorizontally(float input)
{
	if (input != 0)
	{
		AFishPawn* FishPawn =
			(AFishPawn*)GetPawn();
		if (FishPawn != nullptr)
		{
			FishPawn->MoveHorizontally(input);
		}
	}
}


/**
 * Shoots the fish
*/
void AFishPlayerController::ShootFish()
{
	AFishPawn* FishPawn =
		(AFishPawn*)GetPawn();
	if (FishPawn != nullptr)
	{
		FishPawn->Shoot();
	}
}

/**
 * Pauses the game
*/
void AFishPlayerController::PauseGame()
{
	if (PauseMenuWidgetClass != nullptr)
	{
		UUserWidget* CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PauseMenuWidgetClass);
		if (CurrentWidget != nullptr)
		{
			// add pause menu and pause game
			CurrentWidget->AddToViewport();
			SetInputMode(FInputModeUIOnly());
			bShowMouseCursor = true;
			SetPause(true);
		}
	}
}