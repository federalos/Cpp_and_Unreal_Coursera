// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Deck.h"
#include "Card.h"

using namespace consoleCards;

/**
 * Exercise 10
 * @return exit status 
*/
int main()
{
    // Problem 1
    Deck Deck;
    Deck.Shuffle();
    Card Cards[2];

    // Problem 2
    Cards[0] = Deck.TakeTopCard();
    Cards[0].FlipOver();
    std::cout << Cards[0].GetRank() << " of " <<
        Cards[0].GetSuit() << "\n";

    // Problem 3
    Cards[1] = Deck.TakeTopCard();
    Cards[1].FlipOver();
    std::cout << Cards[0].GetRank() << " of " <<
        Cards[0].GetSuit() << "\n";
    std::cout << Cards[1].GetRank() << " of " <<
        Cards[1].GetSuit() << "\n";
}

