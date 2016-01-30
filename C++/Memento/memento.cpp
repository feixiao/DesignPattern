#include "memento.h"
#include <iostream>

using namespace std;
typedef string State;

Originator::Originator() { 
	_sdt = "";
	_mt = 0;
}

Originator::Originator(const State& sdt) { 
	_sdt = sdt;
	_mt = 0;
}

Originator::~Originator() {

}

Memento* Originator::CreateMemento() { 
	return new Memento(_sdt); 
}

State Originator::GetState() { 
	return _sdt; 
}

void Originator::SetState(const State& sdt) { 
	_sdt = sdt; 
}

void Originator::PrintState() { 
	cout<<this->_sdt<<"....."<<endl; 
}

void Originator::SetMemento(Memento* men) {

}

void Originator::RestoreToMemento(Memento* mt) { 
	this->_sdt = mt->GetState();
}

Memento::Memento() {

}

Memento::Memento(const State& sdt) { 
	_sdt = sdt; 
}

State Memento::GetState() { 
	return _sdt; 
}

void Memento::SetState(const State& sdt) { 
	_sdt = sdt; 
}
