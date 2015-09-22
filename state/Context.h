//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_CONTEXT_H
#define ACTIONDESIGNMODEL_CONTEXT_H

class State;

/**
*
**/
class Context {
public:
    Context();

    Context(State *state);

    ~Context();

    void OprationInterface();

    void OperationChangState();

protected:
private:
    friend class State; //������ State ���п��Է��� Context ��� private �ֶ�
    bool ChangeState(State *state);

private:
    State *_state;
};


#endif //ACTIONDESIGNMODEL_CONTEXT_H
