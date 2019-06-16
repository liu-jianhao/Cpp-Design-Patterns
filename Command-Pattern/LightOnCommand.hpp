#ifndef LIGHTONCOMMAND_HPP
#define LIGHTONCOMMAND_HPP

#include <string>
#include <iostream>

#include "Command.hpp"

class LightOnCommand : public Command {
private:
    std::string light;
public:
    LightOnCommand(std::string l) : light(l) {}

    void execute() {
        std::cout << light << " was turned on" << std::endl;
    }
};

#endif