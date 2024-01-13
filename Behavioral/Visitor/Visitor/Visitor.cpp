#include <iostream>
#include "Visitor.h"

Visitor::~Visitor()
{
    std::cout << "Visitor::~Visitor" << std::endl;
}
