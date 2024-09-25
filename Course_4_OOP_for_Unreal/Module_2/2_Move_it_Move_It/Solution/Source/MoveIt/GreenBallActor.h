// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BallActor.h"
#include "GreenBallActor.generated.h"

/**
 * A green ball
 */
UCLASS()
class MOVEIT_API AGreenBallActor : public ABallActor
{
	GENERATED_BODY()
	
public:
	/**
	 * Sets default values for this actor's properties
	*/
	AGreenBallActor();

	/**
	 * Prints a class-specific message
	*/
	virtual void PrintMessage() override;
};
