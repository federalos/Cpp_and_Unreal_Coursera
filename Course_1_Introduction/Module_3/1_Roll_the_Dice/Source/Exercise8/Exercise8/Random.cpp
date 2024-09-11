// Copyright A.T. Chamillard. All Rights Reserved.

#include "Random.h"

#include <time.h>

using namespace exercise8;

bool Random::bInitialized = false;

/**
 * Initializes the random number generator
*/
void Random::Initialize()
{
	// Seed the random-number generator with the current time so that
	// the numbers will be different every time we run.
	srand((unsigned)time(NULL));

	bInitialized = true;
}

/**
 * Returns a non-negative random integer that is less than the specified 
 *		maximum
 * @param MaxValue The exclusive upper bound of the random number 
 *		to be generated. maxValue must be greater than or equal to 0 and
 *		less than or equal to
 * @return A 32-bit signed integer that is greater than or equal to 0, 
 *		and less than maxValue; that is, the range of return values 
 *		includes 0 but not maxValue
*/
int Random::Next(int MaxValue)
{
	// make sure random number generator has been initialized
	if (!bInitialized)
	{
		Initialize();
	}

	return (int)(rand() / ((float)RAND_MAX + 1) * MaxValue);
}