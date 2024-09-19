// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

/**
 * The pawn
*/
UCLASS()
class FINALLYADRIVINGGAME_API AMyPawn : public APawn
{
	GENERATED_BODY()

private:
	const float MoveAmountPerFrame{ 3 };

public:
	/**
	 * Sets default values for this pawn's properties
	*/
	AMyPawn();

protected:
	/**
	 * Called when the game starts or when spawned
	*/
	virtual void BeginPlay() override;

public:	
	/**
	 * Called every frame
	 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
	*/
	virtual void Tick(float DeltaTime) override;

	/**
	 * Moves the pawn horizontally
	* @param moveScale scale factor for movement
	*/
	void MoveHorizontally(float moveScale);

	/**
	 * Moves the pawn vertically
	 * @param moveScale scale factor for movement
	*/
	void MoveVertically(float moveScale);
};
