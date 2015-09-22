//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_STATE_H
#define ACTIONDESIGNMODEL_STATE_H

class Context; //Ç°ÖÃÉùÃ÷
class State {
public:
    State();

    virtual ~State();

    virtual void OperationInterface(Context *) = 0;

    virtual void OperationChangeState(Context *) = 0;

protected:
    bool ChangeState(Context *con, State *st);

private:
//bool ChangeState(Context* con,State* st);
};

class ConcreteStateA : public State {
public:
    ConcreteStateA();

    virtual ~ConcreteStateA();

    virtual void OperationInterface(Context *);

    virtual void OperationChangeState(Context *);

protected:
private:
};

class ConcreteStateB : public State {
public:
    ConcreteStateB();

    virtual ~ConcreteStateB();

    virtual void OperationInterface(Context *);

    virtual void OperationChangeState(Context *);

protected:
private:
};


#endif //ACTIONDESIGNMODEL_STATE_H
