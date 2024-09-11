// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "Rank.h"
#include "Suit.h"

namespace exercise9
{
	/**
	 * A playing card
	*/
	class Card
	{
	private:
		Rank Rank;
		Suit Suit;
		bool bFaceUp{ false };
	public:
		/**
		 * Constructs a card with the given rank and suit
		 * @param Rank rank
		 * @param Suit suit
		*/
		Card(exercise9::Rank Rank, exercise9::Suit Suit);

		/**
		 * Gets the card rank
		 * @return rank
		*/
		exercise9::Rank GetRank();

		/**
		 * Gets the card suit
		 * @return suit
		*/
		exercise9::Suit GetSuit();

		/**
		 * Gets whether or not the card is face up
		 * @return true if face up, false if face down
		*/
		bool IsFaceUp();

		/**
		 * Flips the card over
		*/
		void FlipOver();

		/**
		 * Flips the card over
		*/
		void Print();
	};
}
