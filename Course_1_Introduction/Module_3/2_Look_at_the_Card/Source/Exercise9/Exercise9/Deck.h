// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "Card.h"

#include <vector>

namespace exercise9
{
	/**
	 * A deck of cards
	*/
	class Deck
	{
	private:
		std::vector<Card> Cards;
	public:
		/**
		 * Constructor
		*/
		Deck();

		/**
		 * Gets whether or not the deck is empty
		 * @return true if the deck is empty, false otherwise
		*/
		bool IsEmpty();

		/**
		 * Cuts the deck of cards at the given location
		 * @param Location location at which to cut the deck
		*/
		void Cut(unsigned int Location);

		/**
		 * Shuffles the deck
		*/
		void Shuffle();

		/**
		 * Takes the top card from the deck. If the deck is empty, throws
		 *		an exception
		 * @return top card
		*/
		Card TakeTopCard();

		/**
		 * Prints the cards in the deck, top to bottom
		*/
		void Print();
	};
}
