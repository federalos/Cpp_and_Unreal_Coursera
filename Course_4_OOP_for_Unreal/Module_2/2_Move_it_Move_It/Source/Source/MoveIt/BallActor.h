// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallActor.generated.h"

/**
 *
*/
UCLASS()
class MOVEIT_API ABallActor : public AActor
{
	GENERATED_BODY()
	
private:
	FVector ImpulseForce{ 0.0f, -200.0f, 0.0f };

public:	
	/**
	 * Sets default values for this actor's properties
	*/
	ABallActor();

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
	 * Prints a class-specific message
	*/
	virtual void PrintMessage();

protected:
	/**
	 * Sets the impulse force
	 * @param Force 
	*/
	void SetImpulseForce(FVector Force);
};
