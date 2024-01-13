#include <iostream>
#include "ExportImageVisitor.h"
#include "../../Shape/Impl/CircleShape.h"
#include "../../Shape/Impl/QuadrilateralShape.h"

void ExportImageVisitor::visitCircleShape(CircleShape *circleImage)
{
    std::cout << "ExportImageVisitor - Exporting Circle | Radius ["<< circleImage->getRadius() << "] "
              << "Center [" << circleImage->getCoordinatesCenterXY().first
              << ", " << circleImage->getCoordinatesCenterXY().second
              << std::endl;
}

void ExportImageVisitor::visitQuadrilateralShape(QuadrilateralShape *quadrilateralShape)
{
    std::cout << "ExportImageVisitor - Exporting Quadrilateral | "
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

ExportImageVisitor::~ExportImageVisitor()
{
    std::cout << "ExportImageVisitor::~ExportImageVisitor" << std::endl;
}
