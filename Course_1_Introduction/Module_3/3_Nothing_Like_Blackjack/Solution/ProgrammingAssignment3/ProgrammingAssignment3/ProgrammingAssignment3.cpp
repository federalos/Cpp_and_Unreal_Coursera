// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "Deck.h"
#include "Card.h"

using namespace consoleCards;

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/

void printCards(const std::vector<Card>& cards) {
    for (Card card : cards) {
        card.Print();
    }
}

void printTable(const std::map<int, std::vector<Card>>& Table) {
    for (const auto& item : Table) {
        std::cout << "Player " << item.first << " has" << "\n";
        printCards(item.second);
        std::cout << "\n \n";
    }
}

int main()
{
    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        // Add your code between this comment
        // and the comment below. You can of
        // course add more space between the
        // comments as needed

        // declare a deck variable
        // DON'T SHUFFLE THE DECK
        Deck deck;
        std::map <int, std::vector<Card>> Table;
        // deal 2 cards each to 4 players (deal properly, dealing
        // the first card to each player before dealing the
        // second card to each player)
        for (int iter_cycle = 0; iter_cycle < 2; iter_cycle++) {
            for (int iter_player = 1; iter_player <= 4; iter_player++) {
                Table[iter_player].push_back(deck.TakeTopCard());
            }
        }
        //std::cout << "<--Round 1-->" << "\n";
        //printTable(Table);
        // deal 1 more card to players 2 and 3

        Table[2].push_back(deck.TakeTopCard());
        Table[3].push_back(deck.TakeTopCard());
        //std::cout << "<--Round 2-->" << "\n";
        //printTable(Table);
        // flip all the cards over

        for (auto& item : Table) {
            for (auto& card : item.second) {
                card.FlipOver();
            }
        }
        //std::cout << "<--Round 3-->" << "\n";
        //printTable(Table);
        // print the cards for player 1
        printCards(Table[1]);
        // print the cards for player 2
        printCards(Table[2]);

        // print the cards for player 3
        printCards(Table[3]);

        // print the cards for player 4
        printCards(Table[4]);

        // Don't add or modify any code below
        // this comment
        std::getline(std::cin, Input);
    }
}