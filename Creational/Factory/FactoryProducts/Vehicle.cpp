#include <iostream>
#include "Vehicle.h"

const std::string &Vehicle::getChassis() const
{
    return chassis;
}

void Vehicle::setChassis(const std::string &chassis)
{
    Vehicle::chassis = chassis;
}

const std::string &Vehicle::getEngine() const
{
    return engine;
}

void Vehicle::setEngine(const std::string &engine)
{
    Vehicle::engine = engine;
}

const std::string &Vehicle::getTyres() const
{
    return tyres;
}

void Vehicle::setTyres(const std::string &tyres)
{
    Vehicle::tyres = tyres;
}

const std::string &Vehicle::getBody() const
{
    return body;
}

void Vehicle::setBody(const std::string &body)
{
    Vehicle::body = body;
}

void Vehicle::showDetails()
{
    std::cout << "Vehcile Details - ";
    std::cout << "Chassis: [" << chassis << "] | " ;
    std::cout << "Engine: [" << engine << "] | " ;
    std::cout << "Tyres: [" << tyres << "]" << std::endl;
}
