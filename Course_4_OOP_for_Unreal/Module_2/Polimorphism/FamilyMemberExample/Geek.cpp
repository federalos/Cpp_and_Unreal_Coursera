// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Geek.h"

/**
 * Constructor
 * @param Height height of geek
 * @param Weight weight of geek
*/
Geek::Geek(int Height, int Weight) :
	FamilyMember(Height, Weight)
{
}

/**
 * Destructor
*/
Geek::~Geek()
{
	std::cout << "Destroying Geek object\n";
}