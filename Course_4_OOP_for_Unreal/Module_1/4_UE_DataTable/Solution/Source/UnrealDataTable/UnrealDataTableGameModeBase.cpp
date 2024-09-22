// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealDataTableGameModeBase.h"

/**
 * Sets default values
*/
AUnrealDataTableGameModeBase::AUnrealDataTableGameModeBase()
{
	// set pawn and player controller
	ConstructorHelpers::FObjectFinder<UClass>
		PawnClass(TEXT("Class'/Game/UnrealDataTable/Blueprints/BP_TeddyBearPawn.BP_TeddyBearPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}
	ConstructorHelpers::FObjectFinder<UClass>
		ControllerClass(TEXT("Class'/Game/UnrealDataTable/Blueprints/BP_TeddyBearPlayerController.BP_TeddyBearPlayerController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}