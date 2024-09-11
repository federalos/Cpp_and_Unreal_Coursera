// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

namespace exercise8
{
	/**
	 * A die
	*/
	class Die
	{
	private:
		int TopSide{ 1 };
		int NumSides{ 6 };
	public:
		/**
		 * Constructor for a six-sided die
		*/
		Die();

		/**
		 * Constructor for a die with the given number of sides
		 * @param NumSides number of sides
		*/
		Die(int NumSides);

		/**
		 * Gets the current top side of the die
		 * @return top side
		*/
		int GetTopSide();

		/**
		 * Gets the number of sides the die has
		 * @return number of sides
		*/
		int GetNumSides();

		/**
		 * Rolls the die
		*/
		void Roll();
	};
}

