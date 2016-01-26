#ifndef _VISITOR_H_
#define _VISITOR_H_ 

class ConcreteElementA; 

class ConcreteElementB; 

class Element; 

class Visitor
{
public:
	virtual ~Visitor();
	virtual void VisitConcreteElementA(Element* elm) = 0;
	virtual void VisitConcreteElementB(Element* elm) = 0;
protected:
	Visitor();

}; 

class ConcreteVisitorA :public Visitor
{
public:
	ConcreteVisitorA();
	virtual ~ConcreteVisitorA();
	virtual void VisitConcreteElementA(Element* elm);
	virtual void VisitConcreteElementB(Element* elm);
}; 

class ConcreteVisitorB :public Visitor
{
public:
	ConcreteVisitorB();
	virtual ~ConcreteVisitorB();
	virtual void VisitConcreteElementA(Element* elm);
	virtual void VisitConcreteElementB(Element* elm);
};

class Element
{
public:
	virtual ~Element();
	virtual void Accept(Visitor* vis) = 0;
protected:
	Element();
}; 

class ConcreteElementA :public Element
{
public:
	ConcreteElementA();
	~ConcreteElementA();
	void Accept(Visitor* vis);
}; 

class ConcreteElementB :public Element
{
public:
	ConcreteElementB();
	~ConcreteElementB();
	void Accept(Visitor* vis);
};


#endif