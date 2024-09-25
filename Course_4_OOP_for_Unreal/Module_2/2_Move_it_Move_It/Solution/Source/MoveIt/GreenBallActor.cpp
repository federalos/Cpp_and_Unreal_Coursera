// Copyright A.T. Chamillard. All Rights Reserved.


#include "GreenBallActor.h"

/**
 * Sets default values
*/
AGreenBallActor::AGreenBallActor() :
	ABallActor{}
{
	SetImpulseForce(FVector{ 0.0f, 0.0f, 200.0f });
}

/**
 * Prints a class-specific message
*/
void AGreenBallActor::PrintMessage()
{
	UE_LOG(LogTemp, Warning, TEXT("I'm a green ball!"));
}