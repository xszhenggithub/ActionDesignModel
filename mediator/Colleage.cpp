//
// Created by XSZheng on 2015/9/22.
//

#include "Colleage.h"
#include "Mediator.h"
#include <iostream>

using namespace std;

Colleage::Colleage() {
//_sdt = " ";
}

Colleage::Colleage(Mediator *mdt) {
    this->_mdt = mdt;
//_sdt = " ";
}

Colleage::~Colleage() {
}

ConcreteColleageA::ConcreteColleageA() {
}

ConcreteColleageA::~ConcreteColleageA() {
}

ConcreteColleageA::ConcreteColleageA(Mediator *
mdt) : Colleage(mdt) {
}

string ConcreteColleageA::GetState() {
    return _sdt;
}

void ConcreteColleageA::SetState(const string &sdt) {
    _sdt = sdt;
}

void ConcreteColleageA::Aciton() {
    _mdt->DoActionFromAtoB();
    cout << "State of ConcreteColleageA:" << " " << this->GetState() << endl;
}

ConcreteColleageB::ConcreteColleageB() {
}

ConcreteColleageB::~ConcreteColleageB() {
}

ConcreteColleageB::ConcreteColleageB(Mediator *mdt) : Colleage(mdt) {
}

void ConcreteColleageB::Aciton() {
    _mdt->DoActionFromBtoA();
    cout << "State of ConcreteColleageB:" << " " << this->GetState() << endl;
}

string ConcreteColleageB::GetState() {
    return _sdt;
}

void ConcreteColleageB::SetState(const string &sdt) {
    _sdt = sdt;
}