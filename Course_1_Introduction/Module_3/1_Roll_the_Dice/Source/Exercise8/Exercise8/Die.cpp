// Copyright A.T. Chamillard. All Rights Reserved.

#include "Die.h"

#include "Random.h"

using namespace exercise8;

/**
 * Constructor for a six-sided die
*/
Die::Die() : Die{ 6 }
{
}

/**
 * Constructor for a die with the given number of sides
 * @param NumSides number of sides
*/
Die::Die(int NumSides) : NumSides{ NumSides }
{
}

/**
 * Gets the current top side of the die
 * @return top side
*/
int Die::GetTopSide()
{
	return TopSide;
}

/**
 * Gets the number of sides the die has
 * @return number of sides
*/
int Die::GetNumSides()
{
	return NumSides;
}

/**
 * Rolls the die
*/
void Die::Roll()
{
	TopSide = Random::Next(NumSides) + 1;
}