#include "MallardDuck.hpp"

#include "FlyWithWings.hpp"
#include "Quack.hpp"

#include <iostream>

MallardDuck::MallardDuck() :
    Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {
}

void MallardDuck::display() {
    std::cout << "I'm a real mallard duck" << std::endl;
}

