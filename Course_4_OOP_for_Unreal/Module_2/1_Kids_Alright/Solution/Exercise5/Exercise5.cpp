// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Kid.h"
#include "DisobedientKid.h"
#include "SharingKid.h"

/**
 * Exercise 5 solution
 * @return exit status
*/
int main()
{
    // Problem 1
    Kid Kid{};
    Kid.PrintMessage();

    // Problem 2
    DisobedientKid DisobedientKid{};
    DisobedientKid.PrintMessage();

    // Problem 3
    SharingKid SharingKid{};
    SharingKid.PrintMessage();
}
