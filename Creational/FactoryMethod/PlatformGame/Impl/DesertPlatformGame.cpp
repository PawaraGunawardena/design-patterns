//
// Created by pawara on 11/1/23.
//

#include <iostream>
#include "DesertPlatformGame.h"
#include "GameBackground/Impl/DesertGameBackground.h"

GameBackground *DesertPlatformGame::createGameBackground()
{
    std::cout<< "Creating desert background" << std::endl;
    GameBackground* gb = new DesertGameBackground();
    return gb;
}

DesertPlatformGame::~DesertPlatformGame()
{
    std::cout<< "~DesertPlatformGame" << std::endl;
}
