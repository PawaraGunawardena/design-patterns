#include "Base/BaseImage.h"
#include "Composite/CompositeImage.h"
#include "Leaf/LineImage.h"
#include "Leaf/CircleImage.h"

int main()
{
    BaseImage* compositeImage1 = new CompositeImage();
    BaseImage* compositeImage2 = new CompositeImage();
    BaseImage* compositeImage3 = new CompositeImage();

    BaseImage* line1 = new LineImage();
    BaseImage* line2 = new LineImage();
    BaseImage* circle1 = new CircleImage();

    compositeImage1->add(line1);
    compositeImage1->add(circle1);
    compositeImage2->add(line2);

    compositeImage3->add(compositeImage1);
    compositeImage3->add(compositeImage2);

    compositeImage3->draw();

    compositeImage3->remove(compositeImage1);
    delete compositeImage3;

    return 0;
}
