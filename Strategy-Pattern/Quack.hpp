#ifndef QUACK_HPP
#define QUACK_HPP

#include "QuackBehavior.hpp"

#include <iostream>

class Quack : public QuackBehavior {
public:
    void quack() {
        std::cout << "Quack" << std::endl;
    }
};

#endif