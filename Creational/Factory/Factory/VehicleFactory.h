#pragma once

#include "../FactoryProducts/Vehicle.h"

enum class VehicleType { CAR, TRUCK };

class VehicleFactory
{
public:
    static Vehicle* createVehicle(VehicleType vehicleType);
};
