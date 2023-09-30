#pragma once

#include "../Vehicle.h"

class Car: public Vehicle
{
public:
    void ride() override;
    ~Car() override = default;
};
