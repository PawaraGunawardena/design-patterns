#include <iostream>
#include "PestoPizzaMaker.h"

PestoPizzaMaker::PestoPizzaMaker() {
    _class_ = __func__;
}

void PestoPizzaMaker::prepareIngredients() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Prepare pesto pizza ingredients" << std::endl;
}

void PestoPizzaMaker::applyIngredients() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Apply pesto pesto pizza" << std::endl;
    std::cout << "Apply ingredients pesto pizza" << std::endl;
}

void PestoPizzaMaker::bake() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Bake pesto pizza 10 minutes" << std::endl;
}
