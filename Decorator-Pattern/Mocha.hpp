#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "CondimentDecorator.hpp"

class Mocha : public CondimentDecorator {
public:
    Mocha(std::unique_ptr<Beverage> b) : CondimentDecorator(std::move(b)) {}

    std::string getDescription() {
        return beverage->getDescription() + ", Mocha";
    }

    double cost() {
        return .20 + beverage->cost();
    }
};

#endif