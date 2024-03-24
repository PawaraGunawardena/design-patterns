#include <iostream>
#include "TertiaryHandler.h"

void TertiaryHandler::handle(Request *request)
{
    if(1000 <= request->getValue())
    {
        std::cout << "TertiaryHandler - Handle request | value: "<< request->getValue() << std::endl;
    }
    else
    {
        this->invokeNextHandler(request);
    }
}
