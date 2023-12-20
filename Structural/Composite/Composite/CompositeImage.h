#pragma once

#include <vector>
#include "../Base/BaseImage.h"

class CompositeImage: public BaseImage
{
public:
    CompositeImage();
    void draw() override;
    void add(BaseImage *image) override;
    void remove(BaseImage *image) override;
    BaseImage *getChildImage(int position) override;
    ~CompositeImage() override;

private:
    std::vector<BaseImage*> childImages;
};
