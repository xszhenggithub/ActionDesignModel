//
// Created by XSZheng on 2015/9/22.
//

#include "Handle.h"
#include <iostream>

using namespace std;

Handle::Handle() {
    _succ = 0;
}

Handle::~Handle() {
    delete _succ;
}

Handle::Handle(Handle *succ) {
    this->_succ = succ;
}

void Handle::SetSuccessor(Handle *succ) {
    _succ = succ;
}

Handle *Handle::GetSuccessor() {
    return _succ;
}

void Handle::HandleRequest() {
}

ConcreteHandleA::ConcreteHandleA() {
}

ConcreteHandleA::ConcreteHandleA(Handle *succ) : Handle(succ) {
}

ConcreteHandleA::~ConcreteHandleA() {
}

void ConcreteHandleA::HandleRequest() {
    if (this->GetSuccessor() != 0) {
        cout << "ConcreteHandleA deliver to post node" << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else {
        cout << "ConcreteHandleA no post nodes" << endl;
    }
}

ConcreteHandleB::ConcreteHandleB() {
}

ConcreteHandleB::ConcreteHandleB(Handle *succ) : Handle(succ) {
}

ConcreteHandleB::~ConcreteHandleB() {
}

void ConcreteHandleB::HandleRequest() {
    if (this->GetSuccessor() != 0) {
        cout << "ConcreteHandleB deliver to post node" << endl;
        this->GetSuccessor()->HandleRequest();
    }
    else {
        cout << "ConcreteHandleB no post nodes" << endl;
    }
}