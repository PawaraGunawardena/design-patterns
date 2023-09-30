cmake_minimum_required(VERSION 3.14)
project(Factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Factory main.cpp FactoryProducts/Vehicle.cpp Factory/VehicleFactory.cpp FactoryProducts/VehicleImpl/Car.cpp FactoryProducts/VehicleImpl/Truck.cpp)