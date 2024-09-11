// Copyright A.T. Chamillard. All Rights Reserved.

#include "Card.h"

#include "Rank.h"
#include "Suit.h"

using namespace exercise9;

/**
 * Constructs a card with the given rank and suit
 * @param Rank rank
 * @param Suit suit
*/
Card::Card(exercise9::Rank Rank, exercise9::Suit Suit) :
	Rank{ Rank }, Suit{ Suit }
{
}

/**
 * Gets the card rank
 * @return rank
*/
Rank Card::GetRank()
{
	return Rank;
}

/**
 * Gets the card suit
 * @return suit
*/
Suit Card::GetSuit()
{
	return Suit;
}

/**
 * Gets whether or not the card is face up
 * @return true if face up, false if face down
*/
bool Card::IsFaceUp()
{
	return bFaceUp;
}

/**
 * Flips the card over
*/
void Card::FlipOver()
{
	bFaceUp = !bFaceUp;
}

/**
 * Prints the card
*/
void Card::Print()
{
	std::cout << Rank << " of " << Suit << std::endl;
}