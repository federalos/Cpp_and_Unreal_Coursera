// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "Kid.h"

/**
 * A disobedient kid
*/
class DisobedientKid :
    public Kid
{
public:
    /**
     * Constructor
    */
    DisobedientKid();

    /**
     * Prints a message
    */
    virtual void PrintMessage() override;
};

