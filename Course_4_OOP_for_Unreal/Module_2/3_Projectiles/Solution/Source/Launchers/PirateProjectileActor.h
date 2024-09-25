// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileActor.h"
#include "PirateProjectileActor.generated.h"

/**
 * A pirate projectile
 */
UCLASS()
class LAUNCHERS_API APirateProjectileActor : public AProjectileActor
{
	GENERATED_BODY()
	
public:
	/**
	 * Sets default values for this actor's properties
	*/
	APirateProjectileActor();
};
