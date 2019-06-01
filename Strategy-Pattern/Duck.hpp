#ifndef DUCK_HPP
#define DUCK_HPP

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

#include <memory>
#include <iostream>

class Duck {
public:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;

    Duck(std::unique_ptr<FlyBehavior> fb, std::unique_ptr<QuackBehavior> qb) : flyBehavior(std::move(fb)), quackBehavior(std::move(qb)) {}

    virtual ~Duck(){}

    // 下面两个函数使用了多态
    void performFly(){
        flyBehavior->fly();
    }

    void performQuack(){
        quackBehavior->quack();
    }

    void swim(){
        std::cout << "All ducks swim!" << std::endl;
    }
    virtual void display(){}
};


#endif