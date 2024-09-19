// Copyright A.T. Chamillard. All Rights Reserved.


#include "MinerPawn.h"

/**
 * Sets default values
*/
AMinerPawn::AMinerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void AMinerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AMinerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Sets the location of the pawn
 * @param Location location to move the pawn to
*/
void AMinerPawn::SetLocation(FVector Location)
{
	SetActorLocation(Location);
}
