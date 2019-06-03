#ifndef CURRENTCONDITIONSDISPLAY_HPP
#define CURRENTCONDITIONSDISPLAY_HPP

#include "Observer.hpp"
#include "DisplayElement.hpp"

#include <iostream>
#include <memory>

class CurrentConditionsDisplay : public Observer, public DisplayElement {
private:
    float temperature;
    float humidity;
    std::shared_ptr<Subject> weatherData;
public:
    CurrentConditionsDisplay(std::shared_ptr<Subject> w) : 
        temperature(0.0f), humidity(0.0f), weatherData(std::move(w)) {
    }

    void registerObserver() {
        weatherData->registerObserver(this);
    }

    ~CurrentConditionsDisplay() {
        weatherData->registerObserver(this);
    }

    void update(float t, float h, float p) {
        temperature = t;
        humidity = h;
        display();
    }

    void display() {
        std::cout << "Current condidions: " << temperature << "F degrees and " 
            << humidity << "% humidity" << std::endl;
    }
};

#endif
