#ifndef _DECORATOR_H_
#define  _DECORATOR_H_

class Component {
public:
	virtual ~Component();
	virtual void Operation();

protected: 
	Component();
};

class ConcreteComponent:public Component 
{ 
public: 
	ConcreteComponent();
	~ConcreteComponent();
	void Operation();
};

class Decorator :public Component
{
public: 
	Decorator(Component* com);
	virtual ~Decorator();
	void Operation();
protected: 
	Component* _com;
};

class ConcreteDecorator :public Decorator 
{
public: 
	ConcreteDecorator(Component* com);
	~ConcreteDecorator();
	void Operation();
	void AddedBehavior();
};

#endif