// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <vector>

#include "FamilyMember.h"
#include "Gamer.h"
#include "Geek.h"

/**
 * Family and Polymorphism lecture code
 * @return exit status
*/
int main()
{
    // populate vector of family members
    std::vector<std::unique_ptr<FamilyMember>> FamilyMembers{};
    FamilyMembers.push_back(std::make_unique<FamilyMember>( 69, 185 ));
    FamilyMembers.push_back(std::make_unique<Gamer>( 70, 200 ));
    FamilyMembers.push_back(std::make_unique<Geek>( 71, 165 ));

    // everybody has fun
    for (size_t i{ 0 }; i < FamilyMembers.size(); i++)
    {
        FamilyMembers[i]->HaveFun();
    }
}
