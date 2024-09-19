// Copyright Epic Games, Inc. All Rights Reserved.


#include "MouseJumpingGameModeBase.h"

#include "MinerPlayerController.h"

/**
 * Sets default values
*/
AMouseJumpingGameModeBase::AMouseJumpingGameModeBase()
{
	// set pawn and player controller
	ConstructorHelpers::FObjectFinder<UBlueprint>
		Blueprint(TEXT("Blueprint'/Game/MouseJumping/Blueprints/BP_MinerPawn.BP_MinerPawn'"));
	if (Blueprint.Object != nullptr)
	{
		DefaultPawnClass = (UClass*)Blueprint.Object->GeneratedClass;
	}
	PlayerControllerClass = AMinerPlayerController::StaticClass();
}