cmake_minimum_required(VERSION 3.26)
project(Composite)

set(CMAKE_CXX_STANDARD 20)

add_executable(Composite main.cpp
        Base/BaseImage.cpp
        Composite/CompositeImage.cpp
        Leaf/LineImage.cpp
        Leaf/CircleImage.cpp)
