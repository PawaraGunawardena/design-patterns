#pragma once

#include "../Component/BaseView.h"

class ViewBaseDecorator: public BaseView
{
public:
    explicit ViewBaseDecorator(BaseView *baseView);
    virtual void draw() override;
    ~ViewBaseDecorator() override;

protected:
    BaseView* viewToDecorate;
};
