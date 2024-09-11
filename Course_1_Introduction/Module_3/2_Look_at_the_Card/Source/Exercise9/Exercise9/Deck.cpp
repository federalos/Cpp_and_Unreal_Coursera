// Copyright A.T. Chamillard. All Rights Reserved.

#include "Deck.h"

#include "Random.h"
#include "Card.h"

#include <vector>

using namespace exercise9;

/**
 * Constructor
*/
Deck::Deck()
{
	// fill the deck with cards
	for (Suit Suit : AllSuitValues)
	{
		for (Rank Rank : AllRankValues)
		{
			Cards.push_back(Card{ Rank, Suit });
		}
	}
}

/**
 * Gets whether or not the deck is empty
 * @return true if the deck is empty, false otherwise
*/
bool Deck::IsEmpty()
{
	return Cards.empty();
}

/**
 * Cuts the deck of cards at the given location
 * @param Location location at which to cut the deck
*/
void Deck::Cut(unsigned int Location)
{
	unsigned int CutIndex = Cards.size() - Location;

	// copy end cards into new vector
	std::vector<Card> NewCards;
	for (unsigned int i = CutIndex; i < Cards.size(); i++)
	{
		NewCards.push_back(Cards[i]);
	}

	// copy beginning cards into new vector
	for (unsigned int i = 0; i < CutIndex - 1; i++)
	{
		NewCards.push_back(Cards[i]);
	}

	// clear old vector and copy new cards into old vector
	Cards.clear();
	for (unsigned int i = 0; i < NewCards.size(); i++)
	{
		Cards.push_back(NewCards[i]);
	}
}

/**
 * Shuffles the deck
 * @see http://download.oracle.com/javase/1.5.0/docs/api/java/util/Collections.html#shuffle%28java.util.List%29
*/
void Deck::Shuffle()
{
	for (unsigned int i = Cards.size() - 1; i > 0; i--)
	{
		int RandomIndex = Random::Next(i + 1);
		Card TempCard = Cards[i];
		Cards[i] = Cards[RandomIndex];
		Cards[RandomIndex] = TempCard;
	}
}

/**
 * Takes the top card from the deck. If the deck is empty, throws
 *		an exception
 * @return top card
*/
Card Deck::TakeTopCard()
{
	if (!IsEmpty())
	{
		Card TopCard = Cards.back();
		Cards.pop_back();
		return TopCard;
	}
	else
	{
		throw "Can't take the top card from an empty deck";
	}
}

/**
 * Prints the cards in the deck, top to bottom
*/
void Deck::Print()
{
	for (int i = Cards.size() - 1; i >= 0; i--)
	{
		Cards[i].Print();
	}
}
