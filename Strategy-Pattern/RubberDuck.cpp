#include "RubberDuck.hpp"

#include "FlyNoWay.hpp"
#include "Squeak.hpp"

#include <iostream>

RubberDuck::RubberDuck() :
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<Squeak>()) {
}

void RubberDuck::display() {
    std::cout << "I'm a real rubber duck" << std::endl;
}

