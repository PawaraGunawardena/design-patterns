#pragma once

#include "../Visitor.h"

class ExportImageVisitor: public Visitor
{
public:
    void visitCircleShape(CircleShape *circleImage) override;
    void visitQuadrilateralShape(QuadrilateralShape *quadrilateralShape) override;
    ~ExportImageVisitor() override;
};
