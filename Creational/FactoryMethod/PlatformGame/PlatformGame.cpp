//
// Created by pawara on 11/1/23.
//

#include <iostream>
#include "PlatformGame.h"

void PlatformGame::renderGame()
{
    if(!gameBackground)
    {
        gameBackground = createGameBackground();
        gameBackground->loadBackgroundInfo();
    }
    std::cout << "Rendering game background: " << gameBackground->getBackgroundType() << std::endl;
}

PlatformGame::~PlatformGame()
{
    std::cout<< "~PlatformGame" << std::endl;
    delete gameBackground;
}
