cmake_minimum_required(VERSION 3.14)
project(Singleton)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")
set(CMAKE_CXX_STANDARD 14)

add_executable(Singleton main.cpp Settings.cpp)