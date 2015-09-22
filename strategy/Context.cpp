//
// Created by XSZheng on 2015/9/22.
//

#include "Context.h"
#include "Strategy.h"

Context::Context(Strategy *stg) {
    _stg = stg;
}

Context::~Context() {
    if (!_stg)
        delete _stg;
}

void Context::DoAction() {
    _stg->AlgrithmInterface();
}