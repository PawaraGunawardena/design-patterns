#include <iostream>
#include "PrimaryHandler.h"

void PrimaryHandler::handle(Request *request)
{
    if(request->getValue() < 100 )
    {
        std::cout << "PrimaryHandler - Handle request | value: "<< request->getValue() << std::endl;
    }
    else
    {
        this->invokeNextHandler(request);
    }
}
