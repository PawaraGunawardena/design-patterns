#include <iostream>
#include "SecondaryHandler.h"

void SecondaryHandler::handle(Request *request)
{
    if((100 <= request->getValue()) && (request->getValue() < 1000))
    {
        std::cout << "SecondaryHandler - Handle request | value: "<< request->getValue() << std::endl;
    }
    else
    {
        this->invokeNextHandler(request);
    }
}
