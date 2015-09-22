//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_INVOKER_H
#define ACTIONDESIGNMODEL_INVOKER_H


class Command;

class Invoker {
public:
    Invoker(Command *cmd);

    ~Invoker();

    void Invoke();

protected:
private:
    Command *_cmd;
};

#endif //ACTIONDESIGNMODEL_INVOKER_H
