#pragma once

#include "../ViewBaseDecorator.h"

class ViewScrollDecorator: public ViewBaseDecorator
{
public:
    explicit ViewScrollDecorator(BaseView *baseView);
    void draw() override;
    void scrollTo(int newScrollerPosition);
    ~ViewScrollDecorator() override;

private:
    int scrollerPosition;
};
