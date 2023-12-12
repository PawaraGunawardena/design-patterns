#include <iostream>
#include "ViewScrollDecorator.h"

ViewScrollDecorator::ViewScrollDecorator(BaseView *baseView) : ViewBaseDecorator(baseView)
{
    std::cout << "ViewScrollDecorator::ViewScrollDecorator" << std::endl;
    this->scrollerPosition = 0;
}

void ViewScrollDecorator::draw()
{
    ViewBaseDecorator::draw();
    std::cout << "ViewScrollDecorator::draw" << std::endl ;
    scrollTo(0);
}

void ViewScrollDecorator::scrollTo(int newScrollerPosition)
{
    this->scrollerPosition = newScrollerPosition;
    std::cout << "ViewScrollDecorator::scrollTo:: " << scrollerPosition << std::endl ;
}

ViewScrollDecorator::~ViewScrollDecorator()
{
    std::cout << "ViewScrollDecorator::~ViewScrollDecorator" << std::endl;
}
