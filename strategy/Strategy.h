//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_STRATEGY_H
#define ACTIONDESIGNMODEL_STRATEGY_H


class Strategy {
public:
    Strategy();

    virtual ~Strategy();

    virtual void AlgrithmInterface() = 0;

protected:
private:
};

class ConcreteStrategyA : public Strategy {
public:
    ConcreteStrategyA();

    virtual ~ConcreteStrategyA();

    void AlgrithmInterface();

protected:
private:
};

class ConcreteStrategyB : public Strategy {
public:
    ConcreteStrategyB();

    virtual ~ConcreteStrategyB();

    void AlgrithmInterface();

protected:
private:
};


#endif //ACTIONDESIGNMODEL_STRATEGY_H
