cmake_minimum_required(VERSION 3.26)
project(Decorator)

set(CMAKE_CXX_STANDARD 20)

add_executable(Decorator main.cpp
        Component/BaseView.cpp
        Component/Impl/ImageView.cpp
        Decorator/ViewBaseDecorator.cpp
        Decorator/Impl/ViewOutlineDecorator.cpp
        Decorator/Impl/ViewScrollDecorator.cpp)
