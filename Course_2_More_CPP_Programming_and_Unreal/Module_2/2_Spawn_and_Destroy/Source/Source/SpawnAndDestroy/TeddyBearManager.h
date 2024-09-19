// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "TeddyBear.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TeddyBearManager.generated.h"

/**
 *  A teddy bear spawner and destroyer
*/
UCLASS()
class SPAWNANDDESTROY_API ATeddyBearManager : public APawn
{
	GENERATED_BODY()

private:
	// spawn location support
	const float MinSpawnY{ -200 };
	const float MaxSpawnY{ 200 };
	const float MinSpawnZ{ 0 };
	const float MaxSpawnZ{ 100 };

public:
	UPROPERTY(EditAnywhere,
		meta = (MetaClass = "TeddyBear"),
		Category = TeddyBearBlueprints)
		TSubclassOf<ATeddyBear> UGreenTeddyBear;

public:
	/**
	 * Sets default values for this pawn's properties
	*/
	ATeddyBearManager();

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

	/**
	* Spawns a teddy bear
	*/
	void SpawnTeddyBear();

	/**
	* Destroys a teddy bear
	*/
	void DestroyTeddyBear();
};
