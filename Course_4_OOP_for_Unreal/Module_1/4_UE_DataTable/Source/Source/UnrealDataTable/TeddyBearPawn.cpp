// Copyright A.T. Chamillard. All Rights Reserved.


#include "TeddyBearPawn.h"

#include "ScreenConstants.h"

/**
 * Sets default values
*/
ATeddyBearPawn::ATeddyBearPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void ATeddyBearPawn::BeginPlay()
{
	Super::BeginPlay();

	// save bounds for pawn
	FVector Origin;
	FVector BoxExtent;
	GetActorBounds(true, Origin, BoxExtent);
	HalfCollisionWidth = BoxExtent.Y;
	HalfCollisionHeight = BoxExtent.Z;
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ATeddyBearPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// move pawn based on movement inputs
	FVector PendingMovementInput = ConsumeMovementInputVector();
	if (PendingMovementInput.Y != 0 ||
		PendingMovementInput.Z != 0)
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Y += PendingMovementInput.Y *
			MoveAmountPerSecond * DeltaTime;
		NewLocation.Y = FMath::Clamp(NewLocation.Y,
			ScreenConstants::Left + HalfCollisionWidth,
			ScreenConstants::Right - HalfCollisionWidth);
		NewLocation.Z += PendingMovementInput.Z *
			MoveAmountPerSecond * DeltaTime;
		NewLocation.Z = FMath::Clamp(NewLocation.Z,
			ScreenConstants::Bottom + HalfCollisionHeight,
			ScreenConstants::Top - HalfCollisionHeight);
		SetActorLocation(NewLocation);
	}
}

/**
 * Moves the teddy bear horizontally
 * @param moveScale scale factor for movement
*/
void ATeddyBearPawn::MoveHorizontally(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorRightVector(),
		moveScale);
}

/**
 * Moves the teddy bear vertically
 * @param moveScale scale factor for movement
*/
void ATeddyBearPawn::MoveVertically(float moveScale)
{
	moveScale = FMath::Clamp(moveScale, -1.0f, 1.0f);
	AddMovementInput(GetActorUpVector(),
		moveScale);
}

