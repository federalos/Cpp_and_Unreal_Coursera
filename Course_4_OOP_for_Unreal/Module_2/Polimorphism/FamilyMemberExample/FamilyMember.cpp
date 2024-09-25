// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "FamilyMember.h"

/**
 * Constructor
 * @param Height height of family member
 * @param Weight weight of family member
*/
FamilyMember::FamilyMember(int Height, int Weight) :
	Height{ Height }, Weight{ Weight }
{
}

/**
 * Destructor
*/
FamilyMember::~FamilyMember()
{
	std::cout << "Destroying FamilyMember object\n";
}

/**
 * Gets the height of family member
 * @return height of family member
*/
int FamilyMember::GetHeight()
{
	return Height;
}

/**
 * Sets the height of family member
 * @param Height height of family member
*/
void FamilyMember::SetHeight(int Height)
{
	this->Height = Height;
}

/**
 * Gets the weight of family member
 * @return weight of family member
*/
int FamilyMember::GetWeight()
{
	return Weight;
}

/**
 * Sets the weight of family member
 * @param Weight weight of family member
*/
void FamilyMember::SetWeight(int Weight)
{
	this->Weight = Weight;
}

/**
 * Makes the family member have fun
*/
void FamilyMember::HaveFun()
{
	std::cout << "I'm writing code!\n";
}