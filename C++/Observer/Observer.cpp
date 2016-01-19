#include "Observer.h"
#include <iostream> 
#include <list> 
using namespace std;

typedef string state;

Subject::Subject() { 
	_obvs  = new list<Observer* >;
}

Subject::~Subject() {
	if(	_obvs != NULL ){
		delete _obvs;
	}
}

void Subject::Attach(Observer* obv) { 
	_obvs->push_front(obv); 
}

void Subject::Detach(Observer* obv) { 
	if (obv != NULL) _obvs->remove(obv); 
}

void Subject::Notify() {
	list<Observer*>::iterator it;
	it = _obvs->begin();
	for (; it != _obvs->end(); it++) { 
		(*it)->Update(this);
	}
}

ConcreteSubject::ConcreteSubject() { 
	_st = '\0'; 
}

ConcreteSubject::~ConcreteSubject() {

} 

State ConcreteSubject::GetState(){ 
	return _st; 
}
void ConcreteSubject::SetState(const State& st) { 
	_st = st; 
}

Observer::Observer() {
	_st = '\0';
}
Observer::~Observer() {

} 
ConcreteObserverA::ConcreteObserverA(Subject* sub) {
	_sub = sub;
	_sub->Attach(this);
}
ConcreteObserverA::~ConcreteObserverA() {
	_sub->Detach(this);
	//if (_sub != 0) { delete _sub; }
}
Subject* ConcreteObserverA::GetSubject() { 
	return _sub; 
}

void ConcreteObserverA::PrintInfo() { 
	cout << "ConcreteObserverA observer.... " << _sub->GetState() << endl; 
}

void ConcreteObserverA::Update(Subject* sub) {
	_st = sub->GetState();
	PrintInfo();
}

ConcreteObserverB::ConcreteObserverB(Subject* sub) {
	_sub = sub;
	_sub->Attach(this);
}

ConcreteObserverB::~ConcreteObserverB() {
	_sub->Detach(this);
	//if (_sub != 0) { delete _sub; }
}

Subject* ConcreteObserverB::GetSubject() {
	return _sub;
}

void ConcreteObserverB::PrintInfo() { 
	cout << "ConcreteObserverB observer.... " << _sub->GetState() << endl; 
}

void ConcreteObserverB::Update(Subject* sub) {
	_st = sub->GetState();
	PrintInfo();
}