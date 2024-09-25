// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "FamilyMember.h"

/**
 * A gamer
*/
class Gamer : public FamilyMember
{
public:
	/**
	 * Constructor
	 * @param Height height of gamer
	 * @param Weight weight of gamer
	*/
	Gamer(int Height, int Weight);

	/**
	 * Destructor
	*/
	virtual ~Gamer();

	/**
	 * Makes the gamer have fun
	*/
	virtual void HaveFun() override;
};

