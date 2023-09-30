#pragma once

#include "../Vehicle.h"

class Truck: public Vehicle
{
public:
    void ride() override;
    ~Truck() override = default;
};
