#ifndef FLYNOWAY_HPP
#define FLYNOWAY_HPP

#include "FlyBehavior.hpp"

#include <iostream>

class FlyNoWay : public FlyBehavior {
public:
    void fly() {
        std::cout << "I can't fly" << std::endl;
    }
};

#endif