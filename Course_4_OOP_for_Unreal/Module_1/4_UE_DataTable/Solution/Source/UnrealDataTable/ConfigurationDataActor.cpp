// Copyright A.T. Chamillard. All Rights Reserved.


#include "ConfigurationDataActor.h"

/**
 * Sets default values
*/
AConfigurationDataActor::AConfigurationDataActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void AConfigurationDataActor::BeginPlay()
{
	Super::BeginPlay();
	
	// retrieve configuration data from data table
	FString ContextString;
	ConfigurationDataRow =
		ConfigurationDataTable->FindRow<FConfigurationDataStruct>(
			"ConfigData", ContextString);
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AConfigurationDataActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/**
 * Gets the teddy bear move amount per second
 * @return teddy bear move amount per second
*/
float AConfigurationDataActor::GetTeddyBearMoveAmountPerSecond()
{
	return ConfigurationDataRow->TeddyBearMoveAmountPerSecond;
}
