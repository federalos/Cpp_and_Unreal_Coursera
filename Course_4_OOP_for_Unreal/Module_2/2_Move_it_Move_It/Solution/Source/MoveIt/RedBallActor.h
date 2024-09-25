// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BallActor.h"
#include "RedBallActor.generated.h"

/**
 * A red ball
 */
UCLASS()
class MOVEIT_API ARedBallActor : public ABallActor
{
	GENERATED_BODY()
	
public:
	/**
	 * Prints a class-specific message
	*/
	virtual void PrintMessage() override;
};
