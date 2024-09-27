// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "Blueprint/UserWidget.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FishPlayerController.generated.h"

/**
 * A fish player controller
 */
UCLASS()
class FISHSHOOTER_API AFishPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Widgets")
		TSubclassOf<UUserWidget> PauseMenuWidgetClass;

public:
	/**
	 * Called to bind functionality to input
	*/
	virtual void SetupInputComponent() override;

	/**
	 * Moves the fish horizontally
	 * @param input input on Horizontal axis
	*/
	void MoveHorizontally(float input);

	/**
	 * Shoots the fish
	*/
	void ShootFish();

private:
	/**
	 * Pauses the game
	*/
	void PauseGame();
};
