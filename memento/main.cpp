#include "Memento.h"

int main(int argc, char *argv[]) {
    Originator *o = new Originator();
    o->SetState("old"); //±¸ÍüÇ°×´Ì¬
    o->PrintState();
    Memento *m = o->CreateMemento(); //½«×´Ì¬±¸Íü
    o->SetState("new"); //ĞŞ¸Ä×´Ì¬
    o->PrintState();
    o->RestoreToMemento(m); //»Ö¸´ĞŞ¸ÄÇ°×´Ì¬
    o->PrintState();
    return 0;
}