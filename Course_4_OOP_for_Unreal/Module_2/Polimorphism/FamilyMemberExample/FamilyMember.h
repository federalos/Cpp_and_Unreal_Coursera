// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

/**
 * A family member
*/
class FamilyMember
{
private:
	int Height;
	int Weight;

public:
	/**
	 * Constructor
	 * @param Height height of family member
	 * @param Weight weight of family member
	*/
	FamilyMember(int Height, int Weight);

	/**
	 * Destructor
	*/
	virtual ~FamilyMember();

	/**
	 * Gets the height of family member
	 * @return height of family member
	*/
	int GetHeight();

	/**
	 * Sets the height of family member
	 * @param Height height of family member 
	*/
	void SetHeight(int Height);

	/**
	 * Gets the weight of family member
	 * @return weight of family member
	*/
	int GetWeight();

	/**
	 * Sets the weight of family member
	 * @param Weight weight of family member
	*/
	void SetWeight(int Weight);

	/**
	 * Makes the family member have fun
	*/
	virtual void HaveFun();
};

