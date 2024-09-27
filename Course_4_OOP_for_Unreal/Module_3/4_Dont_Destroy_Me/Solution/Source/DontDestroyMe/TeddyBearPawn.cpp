// Copyright A.T. Chamillard. All Rights Reserved.


#include "TeddyBearPawn.h"

/**
 * Sets default values
*/
ATeddyBearPawn::ATeddyBearPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void ATeddyBearPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ATeddyBearPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Called to bind functionality to input
*/
void ATeddyBearPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
