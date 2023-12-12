#pragma once

#include "../ViewBaseDecorator.h"

class ViewOutlineDecorator: public ViewBaseDecorator
{
public:
    void draw() override;
    void drawOutline();
    explicit ViewOutlineDecorator(BaseView *baseView);
    ~ViewOutlineDecorator() override;

private:
    int outlineWidth;
    std::string outlineColour;
};
