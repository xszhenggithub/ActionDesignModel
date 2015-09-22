//
// Created by XSZheng on 2015/9/22.
//
#include "Context.h"
#include "Strategy.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    Strategy *ps = new ConcreteStrategyA();
    Context *pc = new Context(ps);
    pc->DoAction();
    if (NULL != pc) delete pc;

    pc = new Context(new ConcreteStrategyB());
    pc->DoAction();
    if (NULL != pc) delete pc;
    return 0;
}