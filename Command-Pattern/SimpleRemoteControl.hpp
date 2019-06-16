#ifndef SIMPLEREMOTECONTROL_HPP
#define SIMPLEREMOTECONTROL_HPP

#include "Command.hpp"

class SimpleRemoteControl {
private:
    Command *slot;

public:
    void setCommand(Command *command) {
        slot = command;
    }

    void buttonWasPressed() {
        slot->execute();
    }
};

#endif