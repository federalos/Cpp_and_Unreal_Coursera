// Copyright A.T. Chamillard. All Rights Reserved.


#include "MyPawn.h"

/**
 * Sets default values
*/
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move pawn based on movement inputs

}

/**
 * Moves the pawn horizontally
 * @param moveScale scale factor for movement
*/
void AMyPawn::MoveHorizontally(float moveScale)
{

}

/**
 * Moves the pawn vertically
 * @param moveScale scale factor for movement
*/
void AMyPawn::MoveVertically(float moveScale)
{

}

