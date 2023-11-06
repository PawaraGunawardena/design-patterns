cmake_minimum_required(VERSION 3.26)
project(FactoryMethod)
include_directories(${CMAKE_SOURCE_DIR})
set(CMAKE_CXX_STANDARD 20)

add_executable(FactoryMethod main.cpp
        PlatformGame/Impl/DesertPlatformGame.cpp
        PlatformGame/Impl/ForestPlatformGame.cpp
        GameBackground/Impl/ForestGameBackground.cpp
        GameBackground/Impl/DesertGameBackground.cpp
        GameBackground/GameBackground.cpp
        PlatformGame/PlatformGame.cpp)
