// This class defines the third level of the game.  In this level each of the
// nine targets is moving along closed paths and can be hit
// in any order.
#pragma once

#include "Level.h"

ref class Level3 : public Level
{
internal:
    Level3();
    virtual void Initialize(std::vector<GameObject^> objects) override;
};
