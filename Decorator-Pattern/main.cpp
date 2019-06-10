#include "Espresso.hpp"
#include "Mocha.hpp"
#include "HouseBlend.hpp"

#include <iostream>

int main() {
    std::unique_ptr<Beverage> b2 = std::make_unique<Espresso>(); 
    b2 = std::make_unique<Mocha>(std::move(b2));
    std::cout << b2->getDescription() << " $" << b2->cost() << std::endl;

    std::unique_ptr<Beverage> b3 = std::make_unique<HouseBlend>(); 
    b3 = std::make_unique<Mocha>(std::move(b3));
    std::cout << b3->getDescription() << " $" << b3->cost() << std::endl;
}