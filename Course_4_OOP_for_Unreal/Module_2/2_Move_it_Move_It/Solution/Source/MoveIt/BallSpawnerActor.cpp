// Copyright A.T. Chamillard. All Rights Reserved.


#include "BallSpawnerActor.h"

/**
 * Sets default values
*/
ABallSpawnerActor::ABallSpawnerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void ABallSpawnerActor::BeginPlay()
{
	Super::BeginPlay();
	
	StartSpawnTimer();
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ABallSpawnerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Spawns a ball
*/
void ABallSpawnerActor::SpawnBall()
{
	// randomly pick which ball to spawn
	TSubclassOf<ABallActor> SpawnBall;
	int TeddyBearNumber = FMath::RandRange(0, 2);
	if (TeddyBearNumber == 0)
	{
		SpawnBall = UGreenBall;
	}
	else if (TeddyBearNumber == 1)
	{
		SpawnBall = URedBall;
	}
	else
	{
		SpawnBall = UWhiteBall;
	}

	// generate random spawn location
	FVector SpawnLocation{ 0 };
	SpawnLocation.Y = FMath::RandRange(MinSpawnY, MaxSpawnY);
	SpawnLocation.Z = FMath::RandRange(MinSpawnZ, MaxSpawnZ);

	// spawn the teddy bear
	GetWorld()->SpawnActor<ABallActor>(
		SpawnBall, SpawnLocation,
		FRotator::ZeroRotator);

	// start the timer again
	StartSpawnTimer();
}

/**
 * Starts the spawn timer
*/
void ABallSpawnerActor::StartSpawnTimer()
{
	// set random duration and start the timer
	float TimerDuration = FMath::RandRange(
		MinSpawnDelaySeconds, MaxSpawnDelaySeconds);
	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this,
		&ABallSpawnerActor::SpawnBall,
		TimerDuration);
}
