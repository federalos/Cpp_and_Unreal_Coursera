// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "Engine/DataTable.h"
#include "ConfigurationDataStruct.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConfigurationDataActor.generated.h"

/**
 * A configuration data actor
*/
UCLASS()
class UNREALDATATABLE_API AConfigurationDataActor : public AActor
{
	GENERATED_BODY()
	
private:
	// saved for efficiency
	FConfigurationDataStruct* ConfigurationDataRow;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,
		Category = "Configuration Data Table")
		UDataTable* ConfigurationDataTable;

	/**
	 * Sets default values for this actor's properties
	*/
	AConfigurationDataActor();

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
	 * Gets the teddy bear move amount per second
	 * @return teddy bear move amount per second
	*/
	float GetTeddyBearMoveAmountPerSecond();
};
