#include "Mediator.h"
#include <iostream> 

using namespace std;

Colleage::Colleage() { 

}

Colleage::Colleage(Mediator* mdt) {
	this->_mdt = mdt;
}

Colleage::~Colleage() {

}

ConcreteColleageA::ConcreteColleageA() {

}

ConcreteColleageA::~ConcreteColleageA() {

}
ConcreteColleageA::ConcreteColleageA(Mediator* mdt) :Colleage(mdt) {

}

string ConcreteColleageA::GetState() { 
	return _sdt;
}
void ConcreteColleageA::SetState(const string& sdt) { 
	_sdt = sdt; 
}

void ConcreteColleageA::Aciton() {
	_mdt->DoActionFromAtoB();
	cout << "State of ConcreteColleageB:" << " " << this->GetState() << endl;
}
ConcreteColleageB::ConcreteColleageB() {

}
ConcreteColleageB::~ConcreteColleageB() {

}
ConcreteColleageB::ConcreteColleageB(Mediator* mdt) :Colleage(mdt){

}
void ConcreteColleageB::Aciton() {
	_mdt->DoActionFromBtoA();
	cout << "State of ConcreteColleageB:" << " " << this->GetState() << endl;
}
string ConcreteColleageB::GetState() { 
	return _sdt;
}
void ConcreteColleageB::SetState(const string& sdt) { 
	_sdt = sdt;
}

Mediator::Mediator() {

}
Mediator::~Mediator(){

}
ConcreteMediator::ConcreteMediator() {

}
ConcreteMediator::~ConcreteMediator() {

}
ConcreteMediator::ConcreteMediator(Colleage* clgA, Colleage* clgB) {
	this->_clgA = clgA;
	this->_clgB = clgB;
}
void ConcreteMediator::DoActionFromAtoB() { 
	_clgB->SetState(_clgA->GetState());
}
void ConcreteMediator::SetConcreteColleageA(Colleage* clgA) { 
	this->_clgA = clgA; 
}
void ConcreteMediator::SetConcreteColleageB(Colleage* clgB) { 
	this->_clgB = clgB;
}
Colleage* ConcreteMediator::GetConcreteColleageA() { 
	return _clgA; 
}
Colleage* ConcreteMediator::GetConcreteColleageB() { 
	return _clgB; 
}
void ConcreteMediator::IntroColleage(Colleage* clgA, Colleage* clgB) {
	this->_clgA = clgA;
	this->_clgB = clgB;
}
void ConcreteMediator::DoActionFromBtoA() { 
	_clgA->SetState(_clgB->GetState());
}