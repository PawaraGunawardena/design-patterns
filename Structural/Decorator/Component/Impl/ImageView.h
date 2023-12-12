#pragma once

#include <string>
#include "../BaseView.h"

class ImageView: public BaseView
{
public:
    ImageView();
    void draw() override;
    ~ImageView() override;
};
