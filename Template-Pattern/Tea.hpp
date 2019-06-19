#ifndef TEA_HPP
#define TEA_HPP

#include "CaffeineBeverage.hpp"

#include <iostream>

class Tea : public CaffeineBeverage {
public:
    ~Tea(){}

    void brew() {
        std::cout << "Steeping the tea\n";
    }

    void addCondiments() {
        std::cout << "Adding Lemon\n";
    }

    bool customerWantsCondiments()
    {
        char c;
        std::cout << "Do you want to add condiments?\n";
        std::cin >> c;

        if (c == 'y')
            return true;
        else
            return false;
    }
};

#endif