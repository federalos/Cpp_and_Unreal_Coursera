// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

/**
 * Exercise 13 solution
 * @return exit status
*/
int main()
{
    // Problem 1
    float* Mass{ new float };
    std::cout << "Mass before initialization: " <<
        *Mass << '\n';

    // Problem 2
    *Mass = 100;
    std::cout << "Mass after initialization : " <<
        *Mass << '\n';
    delete Mass;

    // Problem 3
    std::cout << "Mass after deletion       : " <<
        *Mass << '\n';
}

