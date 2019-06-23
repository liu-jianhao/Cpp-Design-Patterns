#ifndef NYSTYLECHEESEPIZZA_HPP
#define NYSTYLECHEESEPIZZA_HPP

#include "Pizza.hpp"

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza()
    {
        name = "NY Style sauce and cheese pizza";
        dough = "Thin crust dough";
        sauce = "Marinara sauce";
        toppings.push_back("Gratted reggiano cheese");
    }
};

#endif