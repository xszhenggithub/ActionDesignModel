//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_HANDLE_H
#define ACTIONDESIGNMODEL_HANDLE_H


class Handle {
public:
    virtual ~Handle();

    virtual void HandleRequest() = 0;

    void SetSuccessor(Handle *succ);

    Handle *GetSuccessor();

protected:
    Handle();

    Handle(Handle *succ);

private:
    Handle *_succ;
};

class ConcreteHandleA : public Handle {
public:
    ConcreteHandleA();

    ~ConcreteHandleA();

    ConcreteHandleA(Handle *succ);

    void HandleRequest();

protected:
private:
};

class ConcreteHandleB : public Handle {
public:
    ConcreteHandleB();

    ~ConcreteHandleB();

    ConcreteHandleB(Handle *succ);

    void HandleRequest();

protected:
private:
};


#endif //ACTIONDESIGNMODEL_HANDLE_H
