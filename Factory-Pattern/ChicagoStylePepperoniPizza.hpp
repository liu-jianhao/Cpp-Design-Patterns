#ifndef CHICAGOSTYLEPEPPERONIPIZZA_HPP
#define CHICAGOSTYLEPEPPERONIPIZZA_HPP

#include "Pizza.hpp"

class ChicagoStylePepperoniPizza: public Pizza
{
public:
    ChicagoStylePepperoniPizza()
    {
        name = "Chicago Style Pepperoni Pizza";
        dough = "Extra thick crust dough";
        sauce = "Plum tomato sauce";
        toppings.push_back("Shredded mozzarella");
        toppings.push_back("Sliced pepperoni");
        toppings.push_back("No olives or eggplant because that should not go on a pizza");
    }
};

#endif