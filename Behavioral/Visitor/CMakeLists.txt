cmake_minimum_required(VERSION 3.26)
project(Visitor)

set(CMAKE_CXX_STANDARD 20)

add_executable(Visitor main.cpp
        Visitor/Visitor.cpp
        Visitor/Visitor.h
        Shape/BaseShape.cpp
        Shape/BaseShape.h
        Shape/Impl/CircleShape.cpp
        Shape/Impl/QuadrilateralShape.cpp
        Visitor/Impl/RenderShapeVisitor.cpp
        Visitor/Impl/ExportImageVisitor.cpp)
