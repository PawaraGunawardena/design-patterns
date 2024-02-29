cmake_minimum_required(VERSION 3.27)
project(TemplateMethod)

set(CMAKE_CXX_STANDARD 20)

add_executable(TemplateMethod main.cpp
        PizzaMaker/BasePizzaMaker.cpp
        PizzaMaker/BasePizzaMaker.h
        PizzaMaker/Impl/MargheritaPizzaMaker.cpp
        PizzaMaker/Impl/MargheritaPizzaMaker.h
        PizzaMaker/Impl/PestoPizzaMaker.cpp
        PizzaMaker/Impl/PestoPizzaMaker.h)
