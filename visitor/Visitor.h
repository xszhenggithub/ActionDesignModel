//
// Created by XSZheng on 2015/9/22.
//

#ifndef ACTIONDESIGNMODEL_VISITOR_H
#define ACTIONDESIGNMODEL_VISITOR_H


class ConcreteElementA;

class ConcreteElementB;

class Element;

class Visitor {
public:
    virtual ~Visitor();

    virtual void VisitConcreteElementA(Element *elm) = 0;

    virtual void VisitConcreteElementB(Element *elm) = 0;

protected:
    Visitor();

private:
};

class ConcreteVisitorA : public Visitor {
public:
    ConcreteVisitorA();

    virtual ~ConcreteVisitorA();

    virtual void VisitConcreteElementA(Element *elm);

    virtual void VisitConcreteElementB(Element *elm);

protected:
private:
};

class ConcreteVisitorB : public Visitor {
public:
    ConcreteVisitorB();

    virtual ~ConcreteVisitorB();

    virtual void VisitConcreteElementA(Element *elm);

    virtual void VisitConcreteElementB(Element *elm);

protected:
private:
};


#endif //ACTIONDESIGNMODEL_VISITOR_H
