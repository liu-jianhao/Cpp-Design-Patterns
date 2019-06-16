#include "LightOnCommand.hpp"
#include "SimpleRemoteControl.hpp"
#include "GarageDoorOpen.hpp"

int main() {
    SimpleRemoteControl *remote = new SimpleRemoteControl();
    LightOnCommand *lightOn = new LightOnCommand("my light");

    remote->setCommand(lightOn);
    remote->buttonWasPressed();

    GarageDoorOpen *doorOpen = new GarageDoorOpen("my garage door");
    remote->setCommand(doorOpen);
    remote->buttonWasPressed();

    delete remote;
    delete lightOn;
    delete doorOpen;
}