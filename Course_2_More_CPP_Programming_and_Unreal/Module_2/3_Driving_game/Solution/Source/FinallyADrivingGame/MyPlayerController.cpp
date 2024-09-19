// Copyright A.T. Chamillard. All Rights Reserved.


#include "MyPlayerController.h"

#include "MyPawn.h"

/**
 * Called to bind functionality to input
*/
void AMyPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// set up movement key bindings
	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal",
		this,
		&AMyPlayerController::MoveHorizontally);
	InputComponent->BindAxis("Vertical",
		this,
		&AMyPlayerController::MoveVertically);
}

/**
 * Moves the pawn horizontally
 * @param input input on Horizontal axis
*/
void AMyPlayerController::MoveHorizontally(float input)
{
	// tell pawn to move horizontally as appropriate
	if (input != 0)
	{
		AMyPawn* MyPawn =
			(AMyPawn*)GetPawn();
		if (MyPawn != nullptr)
		{
			MyPawn->MoveHorizontally(input);
		}
	}
}

/**
 * Moves the pawn vertically
 * @param input input on Vertical axis
*/
void AMyPlayerController::MoveVertically(float input)
{
	// tell pawn to move vertically as appropriate
	if (input != 0)
	{
		AMyPawn* MyPawn =
			(AMyPawn*)GetPawn();
		if (MyPawn != nullptr)
		{
			MyPawn->MoveVertically(input);
		}
	}
}

