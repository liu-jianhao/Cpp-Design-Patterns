#ifndef QUACKBEHAVIOR_HPP
#define QUACKBEHAVIOR_HPP

// 接口类
class QuackBehavior {
public:
    virtual void quack() = 0;
    
    virtual ~QuackBehavior() = default;
};

#endif