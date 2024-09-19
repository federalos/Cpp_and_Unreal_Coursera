// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "Deck.h"
#include "Card.h"

using namespace consoleCards;

/**
 * Exercise 11
 * @return exit status
*/
int main()
{
    Deck Deck;
    Deck.Shuffle();
    std::vector<Card> Cards;

    Cards.push_back(Deck.TakeTopCard());
    Cards[0].FlipOver();
    std::cout << Cards[0].GetRank() << " of " <<
        Cards[0].GetSuit() << "\n";

    Cards.push_back(Deck.TakeTopCard());
    Cards[1].FlipOver();
    std::cout << Cards[0].GetRank() << " of " <<
        Cards[0].GetSuit() << "\n";
    std::cout << Cards[1].GetRank() << " of " <<
        Cards[1].GetSuit() << "\n";
}
