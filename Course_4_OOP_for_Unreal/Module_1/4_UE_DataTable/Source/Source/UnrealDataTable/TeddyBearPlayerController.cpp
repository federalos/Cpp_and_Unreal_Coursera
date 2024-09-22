// Copyright A.T. Chamillard. All Rights RTeserved.


#include "TeddyBearPlayerController.h"

#include "TeddyBearPawn.h"

/**
 * Called to bind functionality to input
*/
void ATeddyBearPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// set up movement key bindings
	check(InputComponent != nullptr);
	InputComponent->BindAxis("Horizontal",
		this,
		&ATeddyBearPlayerController::MoveHorizontally);
	InputComponent->BindAxis("Vertical",
		this,
		&ATeddyBearPlayerController::MoveVertically);
}

/**
 * Moves the teddy bear horizontally
 * @param input input on Horizontal axis
*/
void ATeddyBearPlayerController::MoveHorizontally(float input)
{
	if (input != 0)
	{
		ATeddyBearPawn* TeddyBearPawn =
			(ATeddyBearPawn*)GetPawn();
		if (TeddyBearPawn != nullptr)
		{
			TeddyBearPawn->MoveHorizontally(input);
		}
	}
}

/**
 * Moves the teddy bear vertically
 * @param input input on Vertical axis
*/
void ATeddyBearPlayerController::MoveVertically(float input)
{
	if (input != 0)
	{
		ATeddyBearPawn* TeddyBearPawn =
			(ATeddyBearPawn*)GetPawn();
		if (TeddyBearPawn != nullptr)
		{
			TeddyBearPawn->MoveVertically(input);
		}
	}
}
