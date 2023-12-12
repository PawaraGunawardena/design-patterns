#include <iostream>
#include "ImageView.h"

ImageView::ImageView()
{
    std::cout << "ImageView::ImageView" << std::endl;
}

void ImageView::draw()
{
    std::cout << "ImageView::draw" << std::endl ;
}

ImageView::~ImageView()
{
    std::cout << "ImageView::~ImageView" << std::endl;
}
