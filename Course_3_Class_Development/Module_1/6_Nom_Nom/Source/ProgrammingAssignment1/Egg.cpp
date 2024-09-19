// Copyright A.T. Chamillard. All Rights Reserved.

#include "Egg.h"
#include "EggColor.h"
#include "HowCooked.h"

/**
 * Constructor
 * @param Size size of egg
 * @param Color egg color
*/
Egg::Egg(int Size, EggColor Color)
{

}

/**
 * Gets how much of the egg is left
 * @return amount left
*/
int Egg::GetAmountLeft()
{
	// replace code below with correct code
	return 0;
}

/**
 * Gets the color of the egg
 * @return egg color
*/
EggColor Egg::GetEggColor()
{
	// replace code below with correct code
	return EggColor::Blue;
}

/**
 * Gets how the egg is cooked
 * @return how the egg is cooked
*/
HowCooked Egg::GetCookedStatus()
{
	// replace code below with correct code
	return HowCooked::SoftBoiled;
}

/**
 * Gets whether or not the egg is cooked
 * @return true if the egg is cooked, false otherwise
*/
bool Egg::IsCooked()
{
	// replace code below with correct code
	return true;
}

/**
 * Cooks the egg
 * @param HowToCook how the egg should be cooked
*/
void Egg::Cook(HowCooked HowToCook)
{

}

/**
 * Takes a bite of the given size from the egg.
 * Only takes a bite if the egg is cooked
 * @param Size size of the bite to take
*/
void Egg::TakeBite(int Size)
{

}

/**
 * Dyes the egg the given color. Only white eggs
 * can be dyed, and eggs can only be dyed blue
 * @param Color color to dye the egg
*/
void Egg::Dye(EggColor Color)
{

}