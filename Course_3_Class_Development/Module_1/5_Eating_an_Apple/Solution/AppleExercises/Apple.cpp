// Copyright A.T. Chamillard. All Rights Reserved.

#include "Apple.h"

/**
 * Constructor
 * @param Organic whether or not the apple is organic
 * @param Size size of the apple
*/
Apple::Apple(bool Organic, float Size)
{
	this->Organic = Organic;
	AmountLeft = Size;
}

/**
 * Tells whether or not the apple is organic
 * @return true if the apple is organic, false otherwise
*/
bool Apple::IsOrganic()
{
	return Organic;
}

/**
 * Gets how much of the apple is left
 * @return amount left
*/
float Apple::GetAmountLeft()
{
	return AmountLeft;
}

/**
 * Takes a bite of the given size from the apple
 * @param Size size of the bite to take
*/
void Apple::TakeBite(float Size)
{
    if (Size <= AmountLeft)
    {
        AmountLeft -= Size;
    }
    else
    {
        AmountLeft = 0;
    }
}