// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Mover_R.h"

/**
 * Sets default values
*/
AS_Mover_R::AS_Mover_R()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AS_Mover_R::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AS_Mover_R::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

