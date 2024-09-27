// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TeddyBearPawn.generated.h"

/**
 * A teddy bear pawn
*/
UCLASS()
class DONTDESTROYME_API ATeddyBearPawn : public APawn
{
	GENERATED_BODY()

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
	 * Called to bind functionality to input
	*/
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
