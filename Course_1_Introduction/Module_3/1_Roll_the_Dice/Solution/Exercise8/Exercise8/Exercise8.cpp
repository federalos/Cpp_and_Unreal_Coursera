// Copyright A.T. Chamillard. All Rights Reserved.

#include "Die.h"
#include "Random.h"

#include <iostream>

using namespace exercise8;

/**
 * Exercise 8 Solution
 * @return exit status
*/
int main()
{
    // initialize random number generator
    Random::Initialize();

    Die Die1(6);
    Die Die2(20);

    Die1.Roll();
    Die2.Roll();

    std::cout << "Top side of first die = " << Die1.GetTopSide() << "\n"
        << "Top side of second die = " << Die2.GetTopSide() << "\n"
        << "Sum of top sides of both of dice = " << (Die1.GetTopSide() + Die2.GetTopSide()) << "\n";


    // create two dice

    // tell the dice to roll themselves

    // print the top sides and the sum of the dice

}
