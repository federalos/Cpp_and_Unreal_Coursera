// Fill out your copyright notice in the Description page of Project Settings.


#include "S_Resize.h"

/**
 * Sets default values
*/
AS_Resize::AS_Resize()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void AS_Resize::BeginPlay()
{
	Super::BeginPlay();
	
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AS_Resize::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// resize the Actor
	
	FVector Current_Scale_3D = GetActorScale3D();
	Current_Scale_3D.Y += DeltaTime * ScaleChangePerSecond * ScaleChangeSignMultiplier;
	Current_Scale_3D.Z += DeltaTime * ScaleChangePerSecond * ScaleChangeSignMultiplier;

	SetActorScale3D(Current_Scale_3D);


	// update timer and check if it's done
	ElapsedResizeSeconds += DeltaTime;

	if (ElapsedResizeSeconds >= TotalResizeSeconds){
		// reset timer and start resizing the game object
		// in the opposite direction
		ElapsedResizeSeconds = 0;
		ScaleChangeSignMultiplier *= -1;
	}

}

