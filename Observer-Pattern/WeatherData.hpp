#ifndef WEATHERDATA_HPP
#define WEATHERDATA_HPP

#include "Subject.hpp"
#include "Observer.hpp"

#include <unordered_set>

class WeatherData : public Subject {
private:
    std::unordered_set<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
public:
    void registerObserver(Observer* o) {
        observers.insert(o);
    }

    void removeObserver(Observer* o) {
        observers.erase(o);
    }

    void notifyObservers() {
        for(auto o : observers) {
            o->update(temperature, humidity, pressure);
        }
    }

    void measurementsChanged() {
        notifyObservers();
    }

    void setMeasurements(float t, float h, float p) {
        temperature = t;
        humidity = h;
        pressure = p;
        measurementsChanged();
    }
};

#endif