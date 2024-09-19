// Copyright A.T. Chamillard. All Rights Reserved.


#include "Apple.h"

/**
 * Sets default values
*/
AApple::AApple()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void AApple::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AApple::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Gets the health value of the apple
 * @return health value
*/
int AApple::GetHealthValue()
{
	return HealthValue;
}