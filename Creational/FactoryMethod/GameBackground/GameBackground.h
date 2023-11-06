//
// Created by pawara on 11/2/23.
//

#pragma once

#include <string>

class GameBackground
{
protected:
    std::string backgroundType;
public:
    GameBackground() = default;
    const std::string &getBackgroundType() const;
    virtual void loadBackgroundInfo() const = 0;
    virtual ~GameBackground() = default;
};
