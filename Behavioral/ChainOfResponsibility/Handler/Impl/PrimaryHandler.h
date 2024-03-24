#pragma once

#include "../BaseHandler.h"

class PrimaryHandler: public BaseHandler
{
public:
    void handle(Request *request) override;
};
