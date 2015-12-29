#ifndef _FACADE_H_
#define _FACADE_H_ 

class Subsystem1
{
public:
	Subsystem1();
	~Subsystem1();
	void Operation();
protected: 
private:
};

class Subsystem2
{
public:
	Subsystem2();
	~Subsystem2();
	void Operation(); 
protected: 
private:
};

class Facade
{
public:
	Facade();
	~Facade();
	void OperationWrapper();
protected:
private:
	Subsystem1* _subs1;
	Subsystem2* _subs2;
};

#endif