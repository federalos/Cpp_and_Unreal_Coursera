// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Gamer.h"

/**
 * Constructor
 * @param Height height of gamer
 * @param Weight weight of gamer
*/
Gamer::Gamer(int Height, int Weight) :
	FamilyMember(Height, Weight)
{
}

/**
 * Destructor
*/
Gamer::~Gamer()
{
	std::cout << "Destroying Gamer object\n";
}

/**
 * Makes the gamer have fun
*/
void Gamer::HaveFun()
{
	std::cout << "I'm playing a game!\n";
}
