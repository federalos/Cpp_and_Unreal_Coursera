// Copyright A.T. Chamillard. All Rights RTeserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TeddyBearPlayerController.generated.h"

/**
 * A teddy bear player controller
 */
UCLASS()
class UNREALDATATABLE_API ATeddyBearPlayerController : public APlayerController
{
	GENERATED_BODY()

		/**
		 * Called to bind functionality to input
		*/
		virtual void SetupInputComponent() override;

	/**
	 * Moves the teddy bear horizontally
	 * @param input input on Horizontal axis
	*/
	void MoveHorizontally(float input);

	/**
	 * Moves the teddy bear vertically
	 * @param input input on Vertical axis
	*/
	void MoveVertically(float input);
};
