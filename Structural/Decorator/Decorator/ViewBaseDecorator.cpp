#include <iostream>
#include "ViewBaseDecorator.h"

ViewBaseDecorator::ViewBaseDecorator(BaseView *baseView) : viewToDecorate(baseView)
{
    std::cout << "ViewBaseDecorator::ViewBaseDecorator" << std::endl;
}

void ViewBaseDecorator::draw()
{
    viewToDecorate->draw();
    std::cout << "ViewBaseDecorator:: invoked draw of the "<< typeid(*viewToDecorate).name() << " before decorate" << std::endl ;
}

ViewBaseDecorator::~ViewBaseDecorator()
{
    std::cout << "ViewBaseDecorator::~ViewBaseDecorator" << std::endl;
    delete viewToDecorate;
}
