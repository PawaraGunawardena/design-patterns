#pragma once

#include "../BaseShape.h"

class CircleShape: public BaseShape
{
public:
    CircleShape(double radius, const std::pair<float, float> &coordinatesCenterXy);

    ~CircleShape() override;
    void accept(Visitor *visitor) override;
    const std::pair<float, float> &getCoordinatesCenterXY() const;
    void setCoordinatesCenterXY(const std::pair<float, float> &coordinateCenterXy);
    double getRadius() const;

private:
    double radius;
    std::pair<float, float> coordinatesCenterXY;
};
