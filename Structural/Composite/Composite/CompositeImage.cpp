#include <algorithm>
#include <iostream>
#include "CompositeImage.h"

CompositeImage::CompositeImage()
{
    std::cout << "CompositeImage::CompositeImage" << std::endl;
}

void CompositeImage::draw()
{
    std::cout << "CompositeImage::draw" << std::endl;
    for (BaseImage* childImage: childImages)
    {
        childImage->draw();
    }
}

void CompositeImage::add(BaseImage *image)
{
    std::cout << "CompositeImage::add" << std::endl;
    childImages.push_back(image);
}

void CompositeImage::remove(BaseImage *image)
{
    std::cout << "CompositeImage::remove" << std::endl;
    std::vector<BaseImage*>::iterator imageIterator = std::remove(childImages.begin(), childImages.end(), image);
    if(imageIterator != childImages.end())
    {
        delete image;
        childImages.erase(imageIterator, childImages.end());
    }
}

BaseImage *CompositeImage::getChildImage(int position)
{
    std::cout << "CompositeImage::getChildImage" << std::endl;
    return childImages[position];
}

CompositeImage::~CompositeImage()
{
    std::cout << "CompositeImage::~CompositeImage" << std::endl;
    for (BaseImage* childImage: childImages)
    {
        delete childImage;
    }
}
