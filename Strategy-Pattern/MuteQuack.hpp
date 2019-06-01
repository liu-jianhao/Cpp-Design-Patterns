#ifndef MUTEQUACK_HPP
#define MUTEQUACK_HPP

#include "QuackBehavior.hpp"

#include <iostream>

class MuteQuack : public QuackBehavior {
public:
    void quack() {
        std::cout << "Mute Quack" << std::endl;
    }
};

#endif