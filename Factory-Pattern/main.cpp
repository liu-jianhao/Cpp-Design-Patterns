#include "NYPizzaStore.hpp"
#include "ChicagoPizzaStore.hpp"
#include "PizzaStore.hpp"
#include "Pizza.hpp"

int main()
{
    auto nyStore = new NYPizzaStore();
    auto chicagoStore = new ChicagoPizzaStore();

    auto nyCheese = nyStore->orderPizza("cheese");
    auto chicagoCheese = chicagoStore->orderPizza("cheese");

    return 0;
}
