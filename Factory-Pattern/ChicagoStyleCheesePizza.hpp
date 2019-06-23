#ifndef CHICAGOSTYLECHEESEPIZZA_HPP
#define CHICAGOSTYLECHEESEPIZZA_HPP

#include "Pizza.hpp"

class ChicagoStyleCheesePizza: public Pizza
{
public:
    ChicagoStyleCheesePizza()
    {
        name = "Chicago Style Deep Dish Pizza";
        dough = "Extra thick crust dough";
        sauce = "Plum tomato sauce";
        toppings.push_back("Shredded mozzarella");
    }
};

#endif