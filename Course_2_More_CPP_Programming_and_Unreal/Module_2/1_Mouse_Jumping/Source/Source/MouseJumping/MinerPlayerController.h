// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MinerPlayerController.generated.h"

/**
 * A miner player controller
 */
UCLASS()
class MOUSEJUMPING_API AMinerPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	/**
	 * Called to bind functionality to input
	*/
	virtual void SetupInputComponent() override;

	/**
	 * Jumps the miner pawn
	*/
	void JumpMinerPawn();
};
