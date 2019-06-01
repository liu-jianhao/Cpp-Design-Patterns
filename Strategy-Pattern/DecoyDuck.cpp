#include "DecoyDuck.hpp"

#include "FlyNoWay.hpp"
#include "MuteQuack.hpp"

#include <iostream>

DecoyDuck::DecoyDuck() :
    Duck(std::make_unique<FlyNoWay>(), std::make_unique<MuteQuack>()) {
}

void DecoyDuck::display() {
    std::cout << "I'm a real decoy duck" << std::endl;
}

