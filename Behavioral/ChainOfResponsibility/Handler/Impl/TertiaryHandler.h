#pragma once

#include "../BaseHandler.h"

class TertiaryHandler: public BaseHandler
{
public:
    void handle(Request *request) override;
};