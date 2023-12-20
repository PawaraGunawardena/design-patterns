#include <iostream>
#include "BaseImage.h"

BaseImage::BaseImage()
{
    std::cout << "BaseImage::BaseImage" << std::endl;
}

void BaseImage::add(BaseImage *image)
{
    std::cout << "BaseImage::add" << std::endl;
}

void BaseImage::remove(BaseImage *image)
{
    std::cout << "BaseImage::remove" << std::endl;
}

BaseImage *BaseImage::getChildImage(int position)
{
    std::cout << "BaseImage::getChildImage" << std::endl;
    return nullptr;
}

BaseImage::~BaseImage()
{
    std::cout << "BaseImage::~BaseImage" << std::endl;
}
