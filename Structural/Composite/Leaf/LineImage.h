#pragma once

#include "../Base/BaseImage.h"

class LineImage: public BaseImage
{
public:
    LineImage();
    void draw() override;
    ~LineImage() override;
};
