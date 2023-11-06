//
// Created by pawara on 11/1/23.
//

#pragma once

#include "PlatformGame/PlatformGame.h"

class DesertPlatformGame: public PlatformGame
{
public:
    GameBackground *createGameBackground() override;
    ~DesertPlatformGame() override;
};
