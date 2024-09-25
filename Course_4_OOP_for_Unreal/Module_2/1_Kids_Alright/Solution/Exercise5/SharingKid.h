// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "Kid.h"

/**
 * A sharing kid
*/
class SharingKid :
    public Kid
{
public:
    /**
     * Constructor
    */
    SharingKid();

    /**
     * Prints a message
    */
    virtual void PrintMessage() override;
};
