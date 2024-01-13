#pragma once

class CircleShape;
class QuadrilateralShape;

class Visitor
{
public:
    virtual void visitCircleShape(CircleShape *circleImage) = 0;
    virtual void visitQuadrilateralShape(QuadrilateralShape *lineImage) = 0;
    virtual ~Visitor();
};
