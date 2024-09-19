// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Apple.h"

/**
 * Apple exercises
 * @return exit status
*/
int main()
{
    // test constructor and getters
    Apple TestApple{ true, 1.5f };
    std::cout << "Organic? " << std::boolalpha <<
        TestApple.IsOrganic() << "\n";
    std::cout << "Amount Left: " << TestApple.GetAmountLeft() << "\n";

    // eat the apple
    const float BiteSize = 0.15f;
    while (TestApple.GetAmountLeft() > 0)
    {
        TestApple.TakeBite(BiteSize);
        std::cout << "Amount Left: " << TestApple.GetAmountLeft() << "\n";
    }

}
