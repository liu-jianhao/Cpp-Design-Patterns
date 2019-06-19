#ifndef CAFFEINEBEVERAGE_HPP
#define CAFFEINEBEVERAGE_HPP

#include <iostream>

class CaffeineBeverage {
public:
    virtual ~CaffeineBeverage(){}

    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        if(customerWantsCondiments())
            addCondiments();
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    void boilWater() {
        std::cout << "Boiling water\n";
    }

    void pourInCup() {
        std::cout << "Pouring into cup\n";
    }

    virtual bool customerWantsCondiments() {
        return true;
    }
};


#endif