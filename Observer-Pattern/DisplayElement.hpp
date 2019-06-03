#ifndef DISPLAYELEMENT_HPP
#define DISPLAYELEMENT_HPP

class DisplayElement {
public:
    virtual ~DisplayElement() = default;
    virtual void display() = 0;
};

#endif