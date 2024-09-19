// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

/**
 * The player controller
 */
UCLASS()
class FINALLYADRIVINGGAME_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	/**
	 * Called to bind functionality to input
	*/
	virtual void SetupInputComponent() override;

	/**
	 * Moves the pawn horizontally
	 * @param input input on Horizontal axis
	*/
	void MoveHorizontally(float input);

	/**
	 * Moves the pawn vertically
	 * @param input input on Vertical axis
	*/
	void MoveVertically(float input);
};
