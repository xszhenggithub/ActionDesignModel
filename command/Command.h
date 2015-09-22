//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_COMMAND_H
#define ACTIONDESIGNMODEL_COMMAND_H


#include "Receiver.h"

class Receiver;

class Command {
public:
    virtual ~Command();

    virtual void Excute() = 0;

protected:
    Command();

private:
};

class ConcreteCommand : public Command {
public:
    ConcreteCommand(Receiver *rev);

    ~ConcreteCommand();

    void Excute();

protected:
private:
    Receiver *_rev;
};

#endif //ACTIONDESIGNMODEL_COMMAND_H
