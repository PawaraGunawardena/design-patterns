#include <iostream>
#include <vector>
#include "Shape/BaseShape.h"
#include "Shape/Impl/CircleShape.h"
#include "Shape/Impl/QuadrilateralShape.h"
#include "Visitor/Impl/RenderShapeVisitor.h"
#include "Visitor/Impl/ExportImageVisitor.h"

int main()
{
    std::vector<BaseShape*> shapes = {
            new CircleShape(10.5, {1.0, 2.1}),
            new CircleShape(5.5, {10.2, 15.0}),
            new QuadrilateralShape({10.1, 2.0},  {20.1, 2.0}, {10.1, 5.0}, {20.1, 5.0}),
    };

    Visitor* renderShapeVisitor = new RenderShapeVisitor();
    for(BaseShape* shape: shapes)
    {
        shape->accept(renderShapeVisitor);
    }

    Visitor* exportImageVisitor = new ExportImageVisitor();
    for(BaseShape* shape: shapes)
    {
        shape->accept(exportImageVisitor);
    }

    delete renderShapeVisitor;
    delete exportImageVisitor;
    for(BaseShape* shape: shapes)
    {
        delete shape;
    }

    return 0;
}
