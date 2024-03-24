cmake_minimum_required(VERSION 3.27)
project(ChainOfResponsibility)

set(CMAKE_CXX_STANDARD 20)

add_executable(ChainOfResponsibility main.cpp
        Handler/BaseHandler.cpp
        Handler/BaseHandler.h
        Request/Request.cpp
        Request/Request.h
        Handler/Impl/PrimaryHandler.cpp
        Handler/Impl/PrimaryHandler.h
        Handler/Impl/SecondaryHandler.cpp
        Handler/Impl/SecondaryHandler.h
        Handler/Impl/TertiaryHandler.cpp
        Handler/Impl/TertiaryHandler.h)
