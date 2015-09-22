//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_SUBJECT_H
#define ACTIONDESIGNMODEL_SUBJECT_H


#include <list>
#include <string>

using namespace std;
typedef string State;

class Observer;

class Subject {
public:
    virtual ~Subject();

    virtual void Attach(Observer *obv);

    virtual void Detach(Observer *obv);

    virtual void Notify();

    virtual void SetState(const State &st) = 0;

    virtual State GetState() = 0;

protected:
    Subject();

private:
    list<Observer *> *_obvs;
};

class ConcreteSubject : public Subject {
public:
    ConcreteSubject();

    ~ConcreteSubject();

    State GetState();

    void SetState(const State &st);

protected:
private:
    State _st;
};


#endif //ACTIONDESIGNMODEL_SUBJECT_H
