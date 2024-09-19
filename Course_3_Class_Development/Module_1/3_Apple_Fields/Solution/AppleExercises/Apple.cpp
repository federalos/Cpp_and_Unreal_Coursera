// Copyright A.T. Chamillard. All Rights Reserved.

#include "Apple.h"

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
