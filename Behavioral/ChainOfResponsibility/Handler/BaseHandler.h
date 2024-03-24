#pragma once

#include "../Request/Request.h"

class BaseHandler
{
private:
    BaseHandler* nextHandler;

protected:
    void invokeNextHandler(Request* request);

public:
    BaseHandler();
    BaseHandler* setNextHandler(BaseHandler* handler);
    virtual void handle(Request* request) = 0;
};
