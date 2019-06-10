#ifndef CONDIMENTDECORATOR_HPP
#define CONDIMENTDECORATOR_HPP

#include "Beverage.hpp"

#include <memory>

class CondimentDecorator : public Beverage {
protected:
    std::unique_ptr<Beverage> beverage;
public:
    CondimentDecorator(std::unique_ptr<Beverage> b) : beverage(std::move(b)) {}
    virtual ~CondimentDecorator() = default;
};

#endif
