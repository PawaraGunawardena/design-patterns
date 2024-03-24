#pragma once

class Request
{
private:
    int value;

public:
    Request();
    int getValue() const;
    void setValue(int reqValue);
};
