//
// Created by XSZheng on 2015/9/22.
//

#include "Command.h"
#include "Receiver.h"
#include <iostream>

Command::Command() {
}

Command::~Command() {
}

void Command::Excute() {
}

ConcreteCommand::ConcreteCommand(Receiver *rev) {
    this->_rev = rev;
}

ConcreteCommand::~ConcreteCommand() {
    delete this->_rev;
}

void ConcreteCommand::Excute() {
    _rev->Action();
    std::cout << "ConcreteCommand..." << std::endl;
}