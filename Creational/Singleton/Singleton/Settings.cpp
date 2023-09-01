#include <iostream>
#include "Settings.h"

int Settings::getWidth() const
{
    return width;
}

int Settings::getHeight() const
{
    return height;
}

int Settings::getIndex() const
{
    return index;
}

void Settings::viewSettings()
{
    std::cout << "Index: " << this->getIndex() << std::endl;
    std::cout << "Width: " << this->getWidth() << std::endl;
    std::cout << "Height: " << this->getHeight() << std::endl;
}

Settings::Settings(int width, int height): width(width), height(height)
{
    counter++;
    index = counter;
}

Settings *Settings::getSettings(int width, int height) 
{
    if(not instance)
    {
        instance = new Settings(width, height);
    }
    return instance;
}
