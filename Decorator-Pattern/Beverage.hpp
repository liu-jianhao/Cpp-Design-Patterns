#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include <string>

class Beverage {
public:
    virtual std::string getDescription() {
        return "Unkown Beverage";
    }

    virtual double cost() = 0;
    virtual ~Beverage() = default;
};


#endif