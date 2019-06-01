#ifndef FLYBEHAVIOR_HPP
#define FLYBEHAVIOR_HPP

// 接口类
class FlyBehavior {
public:
    virtual void fly() = 0;
    
    virtual ~FlyBehavior() = default;
};

#endif