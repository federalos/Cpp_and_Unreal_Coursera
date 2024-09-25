// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "FamilyMember.h"
#include "Gamer.h"
#include "Geek.h"

/**
 * Family and Inheritance lecture code
 * @return exit status
*/
int main()
{
    // construct family members
    FamilyMember TheFamilyMember{ 69, 185 };
    Gamer TheGamer{ 70, 200 };
    Geek TheGeek{ 71, 165 };

    // everybody has fun
    TheFamilyMember.HaveFun();
    TheGamer.HaveFun();
    TheGeek.HaveFun();
}
