
#include "Handler/BaseHandler.h"
#include "Handler/Impl/PrimaryHandler.h"
#include "Handler/Impl/SecondaryHandler.h"
#include "Handler/Impl/TertiaryHandler.h"

int main()
{
    BaseHandler *primaryHandler = new PrimaryHandler();
    BaseHandler *secondaryHandler = new SecondaryHandler();
    BaseHandler *tertiaryHandler = new TertiaryHandler();

    primaryHandler->setNextHandler(secondaryHandler)->setNextHandler(tertiaryHandler);

    Request *request1 = new Request();
    request1->setValue(50);
    primaryHandler->handle(request1);

    Request *request2 = new Request();
    request2->setValue(500);
    primaryHandler->handle(request2);

    Request *request3 = new Request();
    request3->setValue(5000);
    primaryHandler->handle(request3);

    return 0;
}
