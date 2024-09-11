// Copyright A.T. Chamillard. All Rights Reserved.

#include "Random.h"
#include "Deck.h"
#include "Card.h"

#include <iostream>

using namespace exercise9;

int main()
{
    // initialize random number generator
    Random::Initialize();

    // create a new deck and tell the deck to print itself
    Deck new_deck;

    // tell the deck to shuffle and print itself
    new_deck.Shuffle();
    std::cout << "The deck is:" << "\n";
    new_deck.Print();
    std::cout << "<-----end of the Deck----->" << "\n";

    // take the top card from the deck and print the card
    Card card_0 = new_deck.TakeTopCard();
    std::cout << "The first card in hand is: ";
    card_0.Print();


    // take the top card from the deck and print the card
    Card card_1 = new_deck.TakeTopCard();
    std::cout << "The second card in hand is: ";
    card_1.Print();
    
}
