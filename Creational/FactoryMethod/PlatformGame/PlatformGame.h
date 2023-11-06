//
// Created by pawara on 11/1/23.
//

#pragma once

#include "GameBackground/GameBackground.h"

class PlatformGame
{
public:
    virtual GameBackground* createGameBackground() = 0;
    void renderGame();
    virtual ~PlatformGame();
private:
    GameBackground* gameBackground;
};
