// Copyright A.T. Chamillard. All Rights Reserved.

#include "TeddyBearPlayerController.h"

#include "TeddyBearPawn.h"

/**
 * Destroys the teddy bear
*/
void ATeddyBearPlayerController::DestroyTeddyBear()
{
	ATeddyBearPawn* TeddyBearPawn =
		(ATeddyBearPawn*)GetPawn();
	if (TeddyBearPawn != nullptr)
	{
		TeddyBearPawn->Destroy();
	}
}