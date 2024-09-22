// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

/**
 * Exercise 14 solution
 * @return exit status
*/
int main()
{
    // Problem 1
    std::shared_ptr<float> FirstPointer{ new float };
    std::shared_ptr<float> SecondPointer{ nullptr };
    std::cout << "First pointer points to: " <<
        *FirstPointer << '\n';

    // Problem 2
    SecondPointer = FirstPointer;
    std::cout << "\nFirst pointer points to: " <<
        *FirstPointer << '\n';
    std::cout << "Second pointer points to: " <<
        *SecondPointer << '\n';

    // Problem 3
    *FirstPointer = 3.1415f;
    std::cout << "\nSecond pointer points to: " <<
        *SecondPointer << '\n';
}
