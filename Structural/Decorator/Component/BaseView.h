#pragma once

class BaseView
{
public:
    BaseView();
    virtual void draw() = 0;
    virtual ~BaseView();
};
