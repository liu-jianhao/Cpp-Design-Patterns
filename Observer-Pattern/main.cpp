#include "WeatherData.hpp"
#include "CurrentConditionsDisplay.hpp"

void WeatherStationWithFunctions()
{
    auto w = std::make_shared<WeatherData>();
    CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(w);
    currentDisplay->registerObserver();
    // 只要主题的值改变了，就会通知观察者即CurrentConditionsDisplay，然后观察者打印出来
    w->setMeasurements(80, 65, 30.4f);
    w->setMeasurements(82, 70, 29.2f);
    w->setMeasurements(78, 90, 29.2f);
    delete currentDisplay;
}

int main()
{
    WeatherStationWithFunctions();
}
