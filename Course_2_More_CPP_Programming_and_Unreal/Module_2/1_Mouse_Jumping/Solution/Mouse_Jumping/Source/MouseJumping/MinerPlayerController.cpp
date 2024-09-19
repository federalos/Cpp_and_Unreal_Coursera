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
	check(InputComponent);

	// bind the jump miner action, when the button is released,
	// to the JumpMinerPawn function
	InputComponent->BindAction("JumpMiner",
		EInputEvent::IE_Released, this,
		&AMinerPlayerController::JumpMinerPawn);
}

/**
 * Jumps the miner pawn
*/
void AMinerPlayerController::JumpMinerPawn()
{
	// convert mouse position to world location
	FVector WorldLocation;
	FVector WorldRotation;
	DeprojectMousePositionToWorld(WorldLocation,
		WorldRotation);

	// move location to y-z plane and move pawn
	WorldLocation.X = 0;
	AMinerPawn* MinerPawn =
		(AMinerPawn*)GetPawn();
	if (MinerPawn != nullptr)
	{
		MinerPawn->SetLocation(WorldLocation);
	}
}