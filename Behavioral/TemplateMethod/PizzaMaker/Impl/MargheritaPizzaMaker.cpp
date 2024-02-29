#include "MargheritaPizzaMaker.h"
#include <iostream>

MargheritaPizzaMaker::MargheritaPizzaMaker() {
    _class_ = __func__;
}

void MargheritaPizzaMaker::prepareIngredients() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Prepare margherita pizza ingredients" << std::endl;
}

void MargheritaPizzaMaker::applyIngredients() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Apply sauce margherita pizza" << std::endl;
    std::cout << "Apply ingredients margherita pizza" << std::endl;
}

void MargheritaPizzaMaker::bake() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Bake margherita pizza 15 minutes" << std::endl;
}

void MargheritaPizzaMaker::applyGarnishes() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Apply garnishes margherita pizza" << std::endl;
}
