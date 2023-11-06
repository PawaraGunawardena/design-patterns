//
// Created by pawara on 11/2/23.
//

#pragma once

#include "GameBackground/GameBackground.h"

class ForestGameBackground: public GameBackground
{
public:
    ForestGameBackground();
    ~ForestGameBackground() override = default;
    void loadBackgroundInfo() const override;
};
