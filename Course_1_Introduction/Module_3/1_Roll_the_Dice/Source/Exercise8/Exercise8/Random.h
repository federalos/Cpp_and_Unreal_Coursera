// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include <random>

namespace exercise8
{
	/**
	 * A random number generator
	*/
	class Random
	{
	private:
		static bool bInitialized;

		// can't instantiate objects of this class
		Random() {}
	public:
		/**
		 * Initializes the random number generator
		*/
		static void Initialize();

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
		static int Next(int MaxValue);
	};
}

