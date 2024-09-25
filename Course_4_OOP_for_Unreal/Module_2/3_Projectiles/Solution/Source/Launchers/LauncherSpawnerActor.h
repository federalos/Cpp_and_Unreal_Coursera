// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "LauncherActor.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LauncherSpawnerActor.generated.h"

/**
 * A launcher spawner
*/
UCLASS()
class LAUNCHERS_API ALauncherSpawnerActor : public AActor
{
	GENERATED_BODY()
	
private:
	// spawn timer support
	const float SpawnDelaySeconds{ 5 };

	/**
	 * Starts the spawn timer
	*/
	void StartSpawnTimer();

public:	
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Launcher"),
		Category = LauncherBlueprints)
		TSubclassOf<ALauncherActor> UChainsawLauncher;
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Launcher"),
		Category = LauncherBlueprints)
		TSubclassOf<ALauncherActor> UPirateLauncher;
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "Launcher"),
		Category = LauncherBlueprints)
		TSubclassOf<ALauncherActor> UZombieLauncher;

	/**
	 * Spawns a launcher
	*/
	UFUNCTION()
		void SpawnLauncher();

	/**
	 * Sets default values for this actor's properties
	*/
	ALauncherSpawnerActor();

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
