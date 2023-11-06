//
// Created by pawara on 11/1/23.
//

#include <iostream>
#include "ForestPlatformGame.h"
#include "GameBackground/Impl/ForestGameBackground.h"

GameBackground* ForestPlatformGame::createGameBackground()
{
    std::cout<< "Creating forest background" << std::endl;
    GameBackground* gb = new ForestGameBackground();
    return gb;
}

ForestPlatformGame::~ForestPlatformGame()
{
    std::cout<< "~ForestPlatformGame" << std::endl;
}
