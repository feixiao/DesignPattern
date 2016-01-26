#include "Bridge.h"
#include <iostream> 
using namespace std;

Abstraction::Abstraction() {

}

Abstraction::~Abstraction() {

}

RefinedAbstraction::RefinedAbstraction(AbstractionImp* imp) { 
	_imp = imp; 
}

RefinedAbstraction::~RefinedAbstraction() {
	if ( !_imp) {
		delete _imp;
	}
}

void RefinedAbstraction::Operation() { 
	_imp->Operation(); 
}

AbstractionImp::AbstractionImp() {

}

AbstractionImp::~AbstractionImp() {

}

void AbstractionImp::Operation() { 
	cout << "AbstractionImp....imp..." << endl;
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA() {

}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA() {

}

void ConcreteAbstractionImpA::Operation() { 
	cout << "ConcreteAbstractionImpA...." << endl;
}

ConcreteAbstractionImpB::ConcreteAbstractionImpB() {

}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB() {

}

void ConcreteAbstractionImpB::Operation() { 
	cout << "ConcreteAbstractionImpB...." << endl;
}