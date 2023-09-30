#include <iostream>
#include "Factory/VehicleFactory.h"
#include "FactoryProducts/Vehicle.h"

int main()
{
    Vehicle* car = VehicleFactory::createVehicle(VehicleType::CAR);
    car->showDetails();
    car->ride();

    Vehicle* truck = VehicleFactory::createVehicle(VehicleType::TRUCK);
    truck->showDetails();
    truck->ride();

    delete car;
    delete truck;

    return 0;
}
