// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DontDestroyMeGameModeBase.generated.h"

/**
 * Custom game mode
 */
UCLASS()
class DONTDESTROYME_API ADontDestroyMeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	/**
	 * Sets default values for this game mode's properties
	*/
	ADontDestroyMeGameModeBase();

protected:
	/** 
	 * Called when the game starts 
	*/
	virtual void BeginPlay() override;

	/** The widget class we will use as our menu when the game starts. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Destroy Widget")
		TSubclassOf<UUserWidget> DestroyWidgetClass;
};
