// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "ConfigurationDataActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TeddyBearPawn.generated.h"

/**
 * A teddy bear pawn
*/
UCLASS()
class UNREALDATATABLE_API ATeddyBearPawn : public APawn
{
	GENERATED_BODY()

private:
	//const float MoveAmountPerSecond{ 100 };
	float HalfCollisionWidth;
	float HalfCollisionHeight;

	// saved for efficiency
	AConfigurationDataActor* ConfigurationData;

public:
	/**
	 * Sets default values for this pawn's properties
	*/
	ATeddyBearPawn();

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
	 * Moves the teddy bear horizontally
	* @param moveScale scale factor for movement
	*/
	void MoveHorizontally(float moveScale);

	/**
	 * Moves the teddy bear vertically
	 * @param moveScale scale factor for movement
	*/
	void MoveVertically(float moveScale);
};
