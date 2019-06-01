#include "RedHeadDuck.hpp"

#include "FlyWithWings.hpp"
#include "Quack.hpp"

#include <iostream>

RedHeadDuck::RedHeadDuck() :
    Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {
}

void RedHeadDuck::display() {
    std::cout << "I'm a real red head duck" << std::endl;
}

