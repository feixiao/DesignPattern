#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_ 

class AbstractClass
{
public:
	virtual ~AbstractClass();
	void TemplateMethod(); 

protected:
	virtual void PrimitiveOperation1() = 0;
	virtual void PrimitiveOperation2() = 0;
	
	AbstractClass();
};

class ConcreteClass1 :public AbstractClass
{
public:
	ConcreteClass1();
	~ConcreteClass1(); 

protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2(); 
};

class ConcreteClass2 :public AbstractClass
{
public:
	ConcreteClass2();
	~ConcreteClass2(); 
	
protected:
	void PrimitiveOperation1();
	void PrimitiveOperation2();
};

#endif