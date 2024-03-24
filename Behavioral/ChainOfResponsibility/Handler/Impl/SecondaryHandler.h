#pragma once

#include "../BaseHandler.h"

class SecondaryHandler: public BaseHandler
{
public:
    void handle(Request *request) override;
};
