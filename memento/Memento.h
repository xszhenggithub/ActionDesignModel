//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_MEMENTO_H
#define ACTIONDESIGNMODEL_MEMENTO_H


#include <string>

using namespace std;

class Memento;

class Originator {
public:
    typedef string State;

    Originator();

    Originator(const State &sdt);

    ~Originator();

    Memento *CreateMemento();

    void SetMemento(Memento *men);

    void RestoreToMemento(Memento *mt);

    State GetState();

    void SetState(const State &sdt);

    void PrintState();

protected:
private:
    State _sdt;
    Memento *_mt;
};

class Memento {
public:
protected:
private:
//������ؼ��ĵط��� �� Originator Ϊ friend �࣬���Է����ڲ���Ϣ�����������಻�ܷ���
    friend class Originator;

    typedef string State;

    Memento();

    Memento(const State &sdt);

    ~Memento();

    void SetState(const State &sdt);

    State GetState();

private:
    State _sdt;
};


#endif //ACTIONDESIGNMODEL_MEMENTO_H
