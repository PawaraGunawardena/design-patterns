#include "Request.h"

Request::Request()
{
    value = 0;
}

int Request::getValue() const
{
    return value;
}

void Request::setValue(int reqValue)
{
    this->value = reqValue;
}
