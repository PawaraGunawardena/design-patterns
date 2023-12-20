#pragma once

#include "../Base/BaseImage.h"

class CircleImage: public BaseImage
{
public:
    CircleImage();
    void draw() override;
    ~CircleImage() override;
};
