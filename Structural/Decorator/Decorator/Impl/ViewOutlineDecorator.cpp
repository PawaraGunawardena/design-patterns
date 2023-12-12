#include <iostream>
#include "ViewOutlineDecorator.h"

ViewOutlineDecorator::ViewOutlineDecorator(BaseView *baseView) : ViewBaseDecorator(baseView)
{
    std::cout << "ViewOutlineDecorator::ViewOutlineDecorator" << std::endl;
    outlineWidth = 2;
    outlineColour = "Black";
}

void ViewOutlineDecorator::draw()
{
    ViewBaseDecorator::draw();
    std::cout << "ViewOutlineDecorator::draw" << std::endl ;
    drawOutline();
}

void ViewOutlineDecorator::drawOutline()
{
    std::cout << "ViewOutlineDecorator::drawOutline - Width:"<< outlineWidth << ", Colour: "<< outlineColour << std::endl ;
}

ViewOutlineDecorator::~ViewOutlineDecorator()
{
    std::cout << "ViewOutlineDecorator::~ViewOutlineDecorator" << std::endl;
}
