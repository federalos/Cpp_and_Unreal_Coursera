// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ProjectileActor.h"
#include "ZombieProjectileActor.generated.h"

/**
 * A zombie projectile
 */
UCLASS()
class LAUNCHERS_API AZombieProjectileActor : public AProjectileActor
{
	GENERATED_BODY()
	
public:
	/**
	 * Sets default values for this actor's properties
	*/
	AZombieProjectileActor();
};
