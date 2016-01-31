#include "handle.h"
#include <iostream>

using namespace std;

Handle::Handle() { 
	_succ = 0; 
}

Handle::~Handle() { 
	delete _succ; 
}

Handle::Handle(Handle* succ) { 
	this->_succ = succ; 
}

void Handle::SetSuccessor(Handle* succ) { 
	_succ = succ; 
}

Handle* Handle::GetSuccessor() { 
	return _succ; 
}

void Handle::HandleRequest() {

}

ConcreteHandleA::ConcreteHandleA() {

}

ConcreteHandleA::ConcreteHandleA(Handle* succ):Handle(succ) {

}

ConcreteHandleA::~ConcreteHandleA() {

}

void ConcreteHandleA::HandleRequest() { 
	if (this->GetSuccessor() != 0) { 
		cout<<"ConcreteHandleA 我把处理权给后继节点....."<<endl; 
		this->GetSuccessor()->HandleRequest(); 
	} else { 
		cout<<"ConcreteHandleA 没有后继了，我必须自己处理...."<<endl; 
	} 
}


ConcreteHandleB::ConcreteHandleB() {

}

ConcreteHandleB::ConcreteHandleB(Handle* succ):Handle(succ) {

}

ConcreteHandleB::~ConcreteHandleB() {

}

void ConcreteHandleB::HandleRequest() { 
	if (this->GetSuccessor() != 0) { 
		cout<<"ConcreteHandleB 我把处理权给后继节点....."<<endl; 
		this->GetSuccessor()->HandleRequest(); 
	} else { 
		cout<<"ConcreteHandleB 没有后继了，我必须自己处理...."<<endl;
	} 
}