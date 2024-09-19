// Copyright A.T. Chamillard. All Rights Reserved.


#include "MinerPlayerController.h"

#include "MinerPawn.h"

/**
 * Called to bind functionality to input
*/
void AMinerPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// check input component


	// bind the jump miner action, when the button is released,
	// to the JumpMinerPawn function

}

/**
 * Jumps the miner pawn
*/
void AMinerPlayerController::JumpMinerPawn()
{
	// convert mouse position to world location


	// move location to y-z plane and move pawn

}