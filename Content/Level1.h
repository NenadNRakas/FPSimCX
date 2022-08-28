// This class defines the first level of the game.  There are nine active targets.
// Each of the targets is stationary and can be hit in any order.
#pragma once

#include "Level.h"

ref class Level1 : public Level
{
internal:
    Level1();
    virtual void Initialize(std::vector<GameObject^> objects) override;
};

