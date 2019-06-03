#ifndef SUBJECT_HPP
#define SUBJECT_HPP

class Observer;

class Subject {
public:
    virtual ~Subject() = default;
    virtual void registerObserver(Observer*) = 0;
    virtual void removeObserver(Observer*) = 0;
    virtual void notifyObservers() = 0;
};

#endif