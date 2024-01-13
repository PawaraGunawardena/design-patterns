#include <iostream>
#include "QuadrilateralShape.h"

QuadrilateralShape::QuadrilateralShape(const std::pair<float, float> &coordinatesX1Y1, const std::pair<float, float> &coordinatesX2Y2,
                                       const std::pair<float, float> &coordinatesX3Y3, const std::pair<float, float> &coordinatesX4Y4)
:
coordinatesX1Y1(coordinatesX1Y1), coordinatesX2Y2(coordinatesX2Y2),
coordinatesX3Y3(coordinatesX3Y3), coordinatesX4Y4(coordinatesX4Y4)
{
    std::cout << "QuadrilateralShape::QuadrilateralShape" << std::endl;
}

void QuadrilateralShape::accept(Visitor *visitor)
{
    visitor->visitQuadrilateralShape(this);
}

QuadrilateralShape::~QuadrilateralShape()
{
    std::cout << "QuadrilateralShape::~QuadrilateralShape" << std::endl;
}

const std::pair<float, float> &QuadrilateralShape::getCoordinatesX1Y1() const
{
    return coordinatesX1Y1;
}

void QuadrilateralShape::setCoordinatesX1Y1(const std::pair<float, float> &coordinatesX1Y1)
{
    this->coordinatesX1Y1 = coordinatesX1Y1;
}

const std::pair<float, float> &QuadrilateralShape::getCoordinatesX2Y2() const
{
    return coordinatesX2Y2;
}

void QuadrilateralShape::setCoordinatesX2Y2(const std::pair<float, float> &coordinatesX2Y2)
{
    this->coordinatesX2Y2 = coordinatesX2Y2;
}

const std::pair<float, float> &QuadrilateralShape::getCoordinatesX3Y3() const
{
    return coordinatesX3Y3;
}

void QuadrilateralShape::setCoordinatesX3Y3(const std::pair<float, float> &coordinatesX3Y3)
{
    this->coordinatesX3Y3 = coordinatesX3Y3;
}

const std::pair<float, float> &QuadrilateralShape::getCoordinatesX4Y4() const
{
    return coordinatesX4Y4;
}

void QuadrilateralShape::setCoordinatesX4Y4(const std::pair<float, float> &coordinatesX4Y4)
{
    this->coordinatesX4Y4 = coordinatesX4Y4;
}
