#ifndef _ABSTRACTION_H_ 

#define _ABSTRACTION_H_

class AbstractionImp;
class Abstraction 
{
public: 
	virtual ~Abstraction();
	virtual void Operation() = 0;
protected: 
	Abstraction();
};

class RefinedAbstraction :public Abstraction 
{
public: 
	RefinedAbstraction(AbstractionImp* imp);
	~RefinedAbstraction();
	void Operation();
private:
	AbstractionImp* _imp;
};

class AbstractionImp {
public: 
	virtual ~AbstractionImp();		
	virtual void Operation() = 0;
protected: 
	AbstractionImp();
};

class ConcreteAbstractionImpA :public AbstractionImp
{
public: 
	ConcreteAbstractionImpA();		
	~ConcreteAbstractionImpA();		
	virtual void Operation();
};

class ConcreteAbstractionImpB : public AbstractionImp
{ 
public:
	ConcreteAbstractionImpB();
	~ConcreteAbstractionImpB();
	virtual void Operation();
};

#endif