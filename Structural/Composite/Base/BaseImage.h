#pragma once

class BaseImage
{
public:
    BaseImage();
    virtual void draw () = 0;
    virtual void add (BaseImage* image);
    virtual void remove ( BaseImage* image);
    virtual BaseImage* getChildImage (int position);
    virtual ~BaseImage();
};
