// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TeddyBearPlayerController.generated.h"

/**
 * A teddy bear player controller
 */
UCLASS()
class DONTDESTROYME_API ATeddyBearPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	/**
	 * Destroys the teddy bear
	*/
	UFUNCTION(BlueprintCallable)
		void DestroyTeddyBear();

};
