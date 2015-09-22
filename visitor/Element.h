//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_ELEMENT_H
#define ACTIONDESIGNMODEL_ELEMENT_H


class Visitor;

class Element {
public:
    virtual ~Element();

    virtual void Accept(Visitor *vis) = 0;

protected:
    Element();

private:
};

class ConcreteElementA : public Element {
public:
    ConcreteElementA();

    ~ConcreteElementA();

    void Accept(Visitor *vis);

protected:
private:
};

class ConcreteElementB : public Element {
public:
    ConcreteElementB();

    ~ConcreteElementB();

    void Accept(Visitor *vis);

protected:
private:
};

#endif //ACTIONDESIGNMODEL_ELEMENT_H
