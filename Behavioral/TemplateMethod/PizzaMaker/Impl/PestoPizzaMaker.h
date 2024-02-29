#pragma once

#include "../BasePizzaMaker.h"

class PestoPizzaMaker : public BasePizzaMaker{
public:
    PestoPizzaMaker();
protected:
    void prepareIngredients() override;
    void applyIngredients() override;
    void bake() override;
private:
    const char * _class_;
};
