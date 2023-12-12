#include "Component/BaseView.h"
#include "Component/Impl/ImageView.h"
#include "Decorator/Impl/ViewOutlineDecorator.h"
#include "Decorator/Impl/ViewScrollDecorator.h"

int main()
{
    BaseView* imageView = new ImageView();
    ViewOutlineDecorator* viewOutlineDecorator = new ViewOutlineDecorator(imageView);
    ViewScrollDecorator* viewScrollDecorator = new ViewScrollDecorator(viewOutlineDecorator);
    viewScrollDecorator->draw();

    delete viewScrollDecorator;
    return 0;
}
