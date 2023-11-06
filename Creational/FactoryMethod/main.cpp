#include <iostream>

#include "PlatformGame/Impl/ForestPlatformGame.h"
#include "PlatformGame/Impl/DesertPlatformGame.h"

int main()
{
    PlatformGame* dpg = new DesertPlatformGame();
    dpg->renderGame();
    delete dpg;

    PlatformGame* fpg = new ForestPlatformGame();
    fpg->renderGame();
    delete fpg;

    return 0;
}
