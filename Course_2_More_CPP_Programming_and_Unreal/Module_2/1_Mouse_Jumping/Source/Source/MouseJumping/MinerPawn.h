// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MinerPawn.generated.h"

/**
 * A miner pawn
*/
UCLASS()
class MOUSEJUMPING_API AMinerPawn : public APawn
{
	GENERATED_BODY()

public:
	/**
	 * Sets default values for this pawn's properties
	*/
	AMinerPawn();

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
	 * Sets the location of the pawn
	 * @param Location location to move the pawn to
	*/
	void SetLocation(FVector Location);
};
