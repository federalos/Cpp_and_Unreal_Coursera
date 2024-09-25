// Copyright A.T. Chamillard. All Rights Reserved.

#include "DisobedientKid.h"

#include <iostream>

/**
 * Constructor
*/
DisobedientKid::DisobedientKid() :
	Kid{}
{

}

/**
 * Prints a message
*/
void DisobedientKid::PrintMessage()
{
	std::cout << "You're not the boss of me!\n";
}