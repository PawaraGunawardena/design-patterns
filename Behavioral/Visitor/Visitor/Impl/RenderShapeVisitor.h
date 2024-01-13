#pragma once

#include "../Visitor.h"

class RenderShapeVisitor: public Visitor
{
public:
    void visitCircleShape(CircleShape *circleImage) override;
    void visitQuadrilateralShape(QuadrilateralShape *quadrilateralShape) override;
    ~RenderShapeVisitor() override;
};
