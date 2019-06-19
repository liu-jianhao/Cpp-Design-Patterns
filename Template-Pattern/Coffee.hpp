#ifndef COFFEE_HPP
#define COFFEE_HPP

#include "CaffeineBeverage.hpp"

#include <iostream>

class Coffee : public CaffeineBeverage {
public:
    ~Coffee(){}

    void brew() {
        std::cout << "Dripping Coffee through filter\n";
    }

    void addCondiments() {
        std::cout << "Adding Sugar and Milk\n";
    }

    bool customerWantsCondiments() {
        char c;
        std::cout << "Do you want to add condiments?\n";
        std::cin >> c;

        if(c == 'y')
            return true;
        else
            return false;
    }
};


#endif