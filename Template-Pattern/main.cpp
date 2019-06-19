#include "Tea.hpp"
#include "Coffee.hpp"

int main() {
    Tea* tea = new Tea();
    Coffee* coffee = new Coffee();

    std::cout << "\nMaking tea...\n";
    tea->prepareRecipe();

    std::cout << "\nMaking coffee...\n";
    coffee->prepareRecipe();

    delete tea;
    delete coffee;
}