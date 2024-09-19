// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "S_Resize.generated.h"

/**
 *
*/
UCLASS()
class SHRINK_AND_GROW_API AS_Resize : public AActor
{
	GENERATED_BODY()
	
private:
	// timer support
	const float TotalResizeSeconds = 1;
	float ElapsedResizeSeconds = 0;

	// resizing control
	const float ScaleChangePerSecond = 10.0;
	int ScaleChangeSignMultiplier = 1;

public:	
	/**
	 * Sets default values for this actor's properties
	*/
	AS_Resize();

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
