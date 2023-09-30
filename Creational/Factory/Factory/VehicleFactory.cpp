#include <iostream>
#include "VehicleFactory.h"
#include "../FactoryProducts/VehicleImpl/Car.h"
#include "../FactoryProducts/VehicleImpl/Truck.h"

Vehicle *VehicleFactory::createVehicle(VehicleType vehicleType)
{
    Vehicle* vehicle = nullptr;

    switch(vehicleType)
    {
        case VehicleType::CAR:
        {
            vehicle = new Car();
            vehicle->setChassis("Car Chassis");
            vehicle->setEngine("Car Engine");
            vehicle->setBody("Car Body");
            vehicle->setTyres("Car Tyres");
            break;
        }
        case VehicleType ::TRUCK:
        {
            vehicle = new Truck();
            vehicle->setChassis("Truck Chassis");
            vehicle->setEngine("Truck Engine");
            vehicle->setBody("Truck Body");
            vehicle->setTyres("Truck Tyres");
            break;
        }
        default:
        {
            std::cout << "Unhandled Vehicle type." << std::endl;
        }
    }
    return vehicle;
}
