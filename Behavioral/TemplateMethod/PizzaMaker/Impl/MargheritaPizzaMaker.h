#pragma once

#include "../BasePizzaMaker.h"

class MargheritaPizzaMaker : public BasePizzaMaker{
public:
    MargheritaPizzaMaker();
protected:
    void prepareIngredients() override;
    void applyIngredients() override;
    void bake() override;
    void applyGarnishes() override;
private:
    const char * _class_;
};
