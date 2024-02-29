#include <iostream>
#include "PizzaMaker/Impl/PestoPizzaMaker.h"
#include "PizzaMaker/Impl/MargheritaPizzaMaker.h"

int main() {
    BasePizzaMaker *pMargheritaPizzaMaker = new MargheritaPizzaMaker();
    pMargheritaPizzaMaker->makePizza();
    std::cout << std::endl;

    BasePizzaMaker *pPestoPizzaMaker = new PestoPizzaMaker();
    pPestoPizzaMaker->makePizza();

    return 0;
}
