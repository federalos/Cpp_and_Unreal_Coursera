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
	 * Tells whether or not the apple is organic
	 * @return true if the apple is organic, false otherwise
	*/
	bool IsOrganic();

	/**
	 * Gets how much of the apple is left
	 * @return amount left
	*/
	float GetAmountLeft();
};
