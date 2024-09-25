// Copyright A.T. Chamillard. All Rights Reserved.

#include "SharingKid.h"

#include <iostream>

/**
 * Constructor
*/
SharingKid::SharingKid() :
	Kid{}
{

}

/**
 * Prints a message
*/
void SharingKid::PrintMessage()
{
	std::cout << "Would you like my cookie?\n";
}