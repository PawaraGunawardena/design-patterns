#pragma once

class BasePizzaMaker {
public:
    BasePizzaMaker();
    void makePizza();
protected:
    virtual void prepareIngredients() = 0;
    virtual void applyIngredients() = 0;
    virtual void bake() = 0;
    virtual void applyGarnishes();
    virtual void serve();
private:
    void loadDough();
    const char * _class_;
};
