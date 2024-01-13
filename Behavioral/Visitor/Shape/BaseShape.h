#pragma once

#include "../Visitor/Visitor.h"

class BaseShape
{
public:
    virtual ~BaseShape();
    virtual void accept(Visitor *visitor) = 0;
};
