// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include <iostream>

/**
 * @file Suit.h
*/

namespace exercise9
{
	/**
	 * An enumeration for card suits
	*/
	enum class Suit
	{
		Clubs,		
		Diamonds,	
		Hearts,		
		Spades		
	};

	// Iteration over values support
	static const Suit AllSuitValues[] = { Suit::Clubs, Suit::Diamonds, Suit::Hearts, 
		Suit::Spades };

	// Output support
	inline std::ostream& operator<<(std::ostream& os, Suit suit)
	{
		switch (suit)
		{
		case Suit::Clubs: os << "Clubs";    break;
		case Suit::Diamonds: os << "Diamonds"; break;
		case Suit::Hearts: os << "Hearts";  break;
		case Suit::Spades: os << "Spades";   break;
		default: os.setstate(std::ios_base::failbit);
		}
		return os;
	}
}
