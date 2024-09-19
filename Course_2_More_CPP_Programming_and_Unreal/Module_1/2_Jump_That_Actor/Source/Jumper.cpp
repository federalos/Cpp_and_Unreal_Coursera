// Copyright A.T. Chamillard. All Rights Reserved.


#include "Jumper.h"

/**
 * Sets default values
*/
AJumper::AJumper()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AJumper::BeginPlay()
{
	Super::BeginPlay();

	// start the jump timer

}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AJumper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Jumps the Actor
*/
void AJumper::Jump()
{
	// generate a random location to jump to


	// jump to new location


	// restart the jump timer

}

/**
 * Starts the jump timer
*/
void AJumper::StartJumpTimer()
{
	// start the timer

}