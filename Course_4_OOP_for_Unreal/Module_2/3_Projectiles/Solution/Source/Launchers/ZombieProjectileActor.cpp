// Copyright A.T. Chamillard. All Rights Reserved.


#include "ZombieProjectileActor.h"

/**
 * Sets default values
*/
AZombieProjectileActor::AZombieProjectileActor() :
	AProjectileActor{}
{
	SetImpulseForce(FVector{ 0.0f, 200.0f, 0.0f });
}