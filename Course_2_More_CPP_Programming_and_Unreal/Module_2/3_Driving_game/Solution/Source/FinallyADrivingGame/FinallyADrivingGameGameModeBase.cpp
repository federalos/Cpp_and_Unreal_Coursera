// Copyright Epic Games, Inc. All Rights Reserved.


#include "FinallyADrivingGameGameModeBase.h"

/**
 * Sets default values
*/
AFinallyADrivingGameGameModeBase::AFinallyADrivingGameGameModeBase()
{
	// set pawn and player controller
	ConstructorHelpers::FObjectFinder<UClass>
		PawnClass(TEXT("Class'/Game/FinallyADrivingGame/Blueprints/BP_MyPawn.BP_MyPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}
	ConstructorHelpers::FObjectFinder<UClass>
		ControllerClass(TEXT("Class'/Game/FinallyADrivingGame/Blueprints/BP_MyPlayerController.BP_MyPlayerController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}