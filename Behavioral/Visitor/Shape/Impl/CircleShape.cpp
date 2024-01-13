#include <iostream>
#include "CircleShape.h"

CircleShape::CircleShape(double radius, const std::pair<float, float> &coordinatesCenterXY) :
radius(radius), coordinatesCenterXY(coordinatesCenterXY)
{
    std::cout << "CircleShape::CircleShape" << std::endl;
}

void CircleShape::accept(Visitor *visitor)
{
    visitor->visitCircleShape(this);
}

double CircleShape::getRadius() const
{
    return radius;
}

CircleShape::~CircleShape()
{
    std::cout << "CircleShape::~CircleShape" << std::endl;
}

const std::pair<float, float> &CircleShape::getCoordinatesCenterXY() const
{
    return coordinatesCenterXY;
}

void CircleShape::setCoordinatesCenterXY(const std::pair<float, float> &coordinatesCenterXY)
{
    this->coordinatesCenterXY = coordinatesCenterXY;
}
