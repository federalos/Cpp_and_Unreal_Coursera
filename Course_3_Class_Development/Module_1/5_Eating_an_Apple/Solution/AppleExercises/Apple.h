// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

/**
 * An apple
*/
class Apple
{
private:
	bool Organic;
	float AmountLeft;
public:
	/**
	 * Constructor
	 * @param Organic whether or not the apple is organic
	 * @param Size size of the apple
	*/
	Apple(bool Organic, float Size);

	/**
	 * Tells whether or not the apple is organic
	 * @return true if the apple is organic, false otherwise
	*/
	bool IsOrganic();

	/**
	 * Gets how much of the apple is left
	 * @return amount left
	*/
	float GetAmountLeft();

	/**
	 * Takes a bite of the given size from the apple
	 * @param Size size of the bite to take
	*/
	void TakeBite(float Size);
};
