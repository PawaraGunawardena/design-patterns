#include <iostream>
#include "RenderShapeVisitor.h"
#include "../../Shape/Impl/CircleShape.h"
#include "../../Shape/Impl/QuadrilateralShape.h"

void RenderShapeVisitor::visitCircleShape(CircleShape *circleImage)
{
    std::cout << "RenderShapeVisitor - Rendering Circle | Radius ["<< circleImage->getRadius() << "] "
              << "Center [" << circleImage->getCoordinatesCenterXY().first
              << ", " << circleImage->getCoordinatesCenterXY().second
              << "]"
              << std::endl;
}

void RenderShapeVisitor::visitQuadrilateralShape(QuadrilateralShape *quadrilateralShape)
{
    std::cout << "RenderShapeVisitor - Rendering Quadrilateral | "
              << "X1 [" << quadrilateralShape->getCoordinatesX1Y1().first<< "] "
              << "X2 [" << quadrilateralShape->getCoordinatesX2Y2().first << "] "
              << "X3 [" << quadrilateralShape->getCoordinatesX3Y3().first << "] "
              << "X4 [" << quadrilateralShape->getCoordinatesX4Y4().first << "] "
              << "Y1 [" << quadrilateralShape->getCoordinatesX1Y1().second << "] "
              << "Y2 [" << quadrilateralShape->getCoordinatesX2Y2().second << "] "
              << "Y3 [" << quadrilateralShape->getCoordinatesX3Y3().second << "] "
              << "Y4 [" << quadrilateralShape->getCoordinatesX4Y4().second << "] "
              << std::endl;
}

RenderShapeVisitor::~RenderShapeVisitor()
{
    std::cout << "RenderShapeVisitor::~RenderShapeVisitor" << std::endl;
}
