// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Apple.generated.h"

/**
 * An apple
*/
UCLASS()
class GRAVITY_API AApple : public AActor
{
	GENERATED_BODY()
	
private:
	const int HealthValue = 10;

public:
	/**
	 * Gets the health value of the apple
	 * @return health value
	*/
	int GetHealthValue();
public:	
	/**
	 * Sets default values for this actor's properties
	*/
	AApple();

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

};
