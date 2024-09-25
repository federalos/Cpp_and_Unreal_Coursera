// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "FamilyMember.h"

/**
 * A geek
*/
class Geek : public FamilyMember
{
public:
	/**
	 * Constructor
	 * @param Height height of geek
	 * @param Weight weight of geek
	*/
	Geek(int Height, int Weight);

	/**
	 * Destructor 
	*/
	virtual ~Geek();
};

