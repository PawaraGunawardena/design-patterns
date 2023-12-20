#include <iostream>
#include "CircleImage.h"

CircleImage::CircleImage()
{
    std::cout << "CircleImage::CircleImage" << std::endl;
}

void CircleImage::draw()
{
    std::cout << "CircleImage::draw" << std::endl;
}

CircleImage::~CircleImage()
{
    std::cout << "CircleImage::~CircleImage" << std::endl;
}
