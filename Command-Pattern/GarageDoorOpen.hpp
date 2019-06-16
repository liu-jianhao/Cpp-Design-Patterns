#ifndef GARAGEDOOROPEN_HPP
#define GARAGEDOOROPEN_HPP 
 
#include <string>
#include <iostream>

#include "Command.hpp"

class GarageDoorOpen : public Command {
private:
    std::string door;
public:
    GarageDoorOpen(std::string g) : door(g) {}

    void execute() {
        std::cout << door << " was opened" << std::endl;
    }
};

#endif