#include <iostream>
#include "LineImage.h"

LineImage::LineImage()
{
    std::cout << "LineImage::LineImage" << std::endl;
}

void LineImage::draw()
{
    std::cout << "LineImage::draw" << std::endl;
}

LineImage::~LineImage()
{
    std::cout << "LineImage::~LineImage" << std::endl;
}
