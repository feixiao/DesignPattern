#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <list> 
#include <string> 
using namespace std;

typedef string State;

class Observer;

class Subject {
public:
	virtual ~Subject();
	virtual void Attach(Observer* obv);
	virtual void Detach(Observer* obv);
	virtual void Notify();
	virtual void SetState(const State& st) = 0;
	virtual State GetState() = 0;
protected:
	Subject();
private:
	list<Observer* >* _obvs;
};

class ConcreteSubject :public Subject {
public:
	ConcreteSubject();
	~ConcreteSubject();
	State GetState();
	void SetState(const State& st);
private:
	State _st;
};

class Observer {
public:
	virtual ~Observer();
	virtual void Update(Subject* sub) = 0;
	virtual void PrintInfo() = 0;
protected:
	Observer();
	State _st;
};
class ConcreteObserverA :public Observer {
public:
	virtual Subject* GetSubject();
	ConcreteObserverA(Subject* sub);
	virtual ~ConcreteObserverA();
	void PrintInfo();
	void Update(Subject* sub);
private:
	Subject* _sub;
};

class ConcreteObserverB :public Observer {
public:
	virtual Subject* GetSubject();
	ConcreteObserverB(Subject* sub);
	virtual ~ConcreteObserverB();
	void PrintInfo();
	void Update(Subject* sub);
private:
	Subject* _sub;
};
#endif