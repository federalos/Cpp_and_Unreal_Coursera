// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "BallActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BallSpawnerActor.generated.h"

/**
 * A ball spawner
*/
UCLASS()
class MOVEIT_API ABallSpawnerActor : public AActor
{
	GENERATED_BODY()

private:
	// spawn delay support
	const float MinSpawnDelaySeconds{ 1 };
	const float MaxSpawnDelaySeconds{ 2 };

	// spawn location support
	const float MinSpawnY{ -200 };
	const float MaxSpawnY{ 200 };
	const float MinSpawnZ{ 0 };
	const float MaxSpawnZ{ 100 };

	/**
	 * Starts the spawn timer
	*/
	void StartSpawnTimer();

public:
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Ball"),
		Category = BallBlueprints)
		TSubclassOf<ABallActor> UGreenBall;
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Ball"),
		Category = BallBlueprints)
		TSubclassOf<ABallActor> URedBall;
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Ball"),
		Category = BallBlueprints)
		TSubclassOf<ABallActor> UWhiteBall;

	/**
	 * Spawns a ball
	*/
	UFUNCTION()
		void SpawnBall();

	/**
	 * Sets default values for this actor's properties
	*/
	ABallSpawnerActor();

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
