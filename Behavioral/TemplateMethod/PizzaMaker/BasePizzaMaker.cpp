#include <iostream>
#include "BasePizzaMaker.h"

BasePizzaMaker::BasePizzaMaker() {
    _class_ = __func__;
}

void BasePizzaMaker::makePizza() {
    std::cout << _class_ << "::" << __func__ << std::endl;

    loadDough();
    prepareIngredients();
    applyIngredients();
    bake();
    applyGarnishes();
    serve();
}

void BasePizzaMaker::loadDough() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Loading dough completed" << std::endl;
}

void BasePizzaMaker::applyGarnishes() {

}

void BasePizzaMaker::serve() {
    std::cout << _class_ << "::" << __func__ << std::endl;
    std::cout << "Dispatch the pizza" << std::endl;
}
