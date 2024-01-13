#pragma once

#include "../BaseShape.h"

class QuadrilateralShape: public BaseShape
{
public:
    QuadrilateralShape(const std::pair<float, float> &coordinatesX1Y1, const std::pair<float, float> &coordinatesX2Y2,
                       const std::pair<float, float> &coordinatesX3Y3, const std::pair<float, float> &coordinatesX4Y4);
    ~QuadrilateralShape() override;
    void accept(Visitor *visitor) override;
    const std::pair<float, float> &getCoordinatesX1Y1() const;
    void setCoordinatesX1Y1(const std::pair<float, float> &coordinatesX1Y1);
    const std::pair<float, float> &getCoordinatesX2Y2() const;
    void setCoordinatesX2Y2(const std::pair<float, float> &coordinatesX2Y2);
    const std::pair<float, float> &getCoordinatesX3Y3() const;
    void setCoordinatesX3Y3(const std::pair<float, float> &coordinatesX3Y3);
    const std::pair<float, float> &getCoordinatesX4Y4() const;
    void setCoordinatesX4Y4(const std::pair<float, float> &coordinatesX4Y4);

private:
    std::pair<float, float> coordinatesX1Y1;
    std::pair<float, float> coordinatesX2Y2;
    std::pair<float, float> coordinatesX3Y3;
    std::pair<float, float> coordinatesX4Y4;
};
