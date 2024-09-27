// Copyright Epic Games, Inc. All Rights Reserved.

#include "DontDestroyMeGameModeBase.h"

/**
 * Sets default values for this game mode's properties
*/
ADontDestroyMeGameModeBase::ADontDestroyMeGameModeBase()
{
	// set pawn and player controller
	ConstructorHelpers::FObjectFinder<UClass>
		PawnClass(TEXT("Class'/Game/DontDestroyMe/Blueprints/BP_TeddyBearPawn.BP_TeddyBearPawn_C'"));
	if (PawnClass.Object != nullptr)
	{
		DefaultPawnClass = PawnClass.Object;
	}
	ConstructorHelpers::FObjectFinder<UClass>
		ControllerClass(TEXT("Class'/Game/DontDestroyMe/Blueprints/BP_TeddyBearPlayerController.BP_TeddyBearPlayerController_C'"));
	if (ControllerClass.Object != nullptr)
	{
		PlayerControllerClass = ControllerClass.Object;
	}
}

/**
 * Called when the game starts
*/
void ADontDestroyMeGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (DestroyWidgetClass != nullptr)
	{
		UUserWidget* CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), DestroyWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}
