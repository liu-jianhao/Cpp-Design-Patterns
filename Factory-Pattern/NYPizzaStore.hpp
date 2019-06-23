#ifndef NYPIZZASTORE_HPP
#define NYPIZZASTORE_HPP

#include "PizzaStore.hpp"
#include "NYStyleCheesePizza.hpp"
#include "NYStylePepperoniPizza.hpp"

class NYPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(std::string type) {
        std::unique_ptr<Pizza> pizza = nullptr;

        if (type == "cheese")
        {
            pizza = std::make_unique<NYStyleCheesePizza>();
        }
        else if (type == "pepperoni")
        {
            pizza = std::make_unique<NYStylePepperoniPizza>();
        }
        return pizza;
    }
};

#endif