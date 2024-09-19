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
	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.Y != 0 ||
		PendingMovementInput.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		PendingMovementInput.Y = FMath::Clamp(
			PendingMovementInput.Y, -1.0f, 1.0f);
		NewLocation.Y += PendingMovementInput.Y;
		PendingMovementInput.Z = FMath::Clamp(
			PendingMovementInput.Z, -1.0f, 1.0f);
		NewLocation.Z += PendingMovementInput.Z;
		SetActorLocation(NewLocation);
	}

}

/**
 * Moves the pawn horizontally
 * @param moveScale scale factor for movement
*/
void AMyPawn::MoveHorizontally(float moveScale)
{
	AddMovementInput(GetActorRightVector(),
		moveScale * MoveAmountPerFrame);
}

/**
 * Moves the pawn vertically
 * @param moveScale scale factor for movement
*/
void AMyPawn::MoveVertically(float moveScale)
{
	AddMovementInput(GetActorUpVector(),
		moveScale * MoveAmountPerFrame);
}

