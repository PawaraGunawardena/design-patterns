//
// Created by pawara on 11/2/23.
//

#include <iostream>
#include "DesertGameBackground.h"

DesertGameBackground::DesertGameBackground()
{
    backgroundType = "desert";
}

void DesertGameBackground::loadBackgroundInfo() const
{
    std::cout<< "Load desert game background info" << std::endl;
}
