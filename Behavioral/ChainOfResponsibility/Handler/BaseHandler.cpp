#include "BaseHandler.h"

BaseHandler::BaseHandler(): nextHandler(nullptr)
{

}

BaseHandler *BaseHandler::setNextHandler(BaseHandler *handler)
{
    this->nextHandler = handler;
    return this->nextHandler;
}

void BaseHandler::invokeNextHandler(Request *request)
{
    if (nextHandler)
    {
        nextHandler->handle(request);
    }
}

