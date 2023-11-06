//
// Created by pawara on 11/2/23.
//

#pragma once

#include "GameBackground/GameBackground.h"

class DesertGameBackground: public GameBackground
{
public:
    DesertGameBackground();
    ~DesertGameBackground() override = default;
    void loadBackgroundInfo() const override;
};
