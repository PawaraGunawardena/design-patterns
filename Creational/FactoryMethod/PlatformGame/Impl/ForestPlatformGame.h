//
// Created by pawara on 11/1/23.
//

#pragma once

#include "PlatformGame/PlatformGame.h"

class ForestPlatformGame: public PlatformGame
{
public:
    GameBackground* createGameBackground() override;
    ~ForestPlatformGame() override;
};
