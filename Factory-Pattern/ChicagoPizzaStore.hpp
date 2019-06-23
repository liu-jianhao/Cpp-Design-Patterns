#ifndef CHICAGOPIZZASTORE_HPP
#define CHICAGOPIZZASTORE_HPP

#include "PizzaStore.hpp"
#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"

class ChicagoPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(std::string type) {
        std::unique_ptr<Pizza> pizza = nullptr;

        if (type == "cheese")
        {
            pizza = std::make_unique<ChicagoStyleCheesePizza>();
        }
        else if (type == "pepperoni")
        {
            pizza = std::make_unique<ChicagoStylePepperoniPizza>();
        }
        return pizza;
    }
};

#endif