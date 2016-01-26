#include "Visitor.h"
#include <iostream>

using namespace std; 
Visitor::Visitor() {

} 

Visitor::~Visitor() {

} 

ConcreteVisitorA::ConcreteVisitorA() {

} 

ConcreteVisitorA::~ConcreteVisitorA() {

}

void ConcreteVisitorA::VisitConcreteElementA(Element* elm) {
	cout << "i will visit ConcreteElementA..." << endl;
} 

void ConcreteVisitorA::VisitConcreteElementB(Element* elm) {
	cout << "i will visit ConcreteElementB..." << endl;
} 

ConcreteVisitorB::ConcreteVisitorB() {

} 

ConcreteVisitorB::~ConcreteVisitorB() {

} 

void ConcreteVisitorB::VisitConcreteElementA(Element* elm) {
	cout << "i will visit ConcreteElementA..." << endl;
} 

void ConcreteVisitorB::VisitConcreteElementB(Element* elm) {
	cout << "i will visit ConcreteElementB..." << endl;
}

Element::Element() {

}

Element::~Element() {

}

void Element::Accept(Visitor* vis) {

}

ConcreteElementA::ConcreteElementA() {

}

ConcreteElementA::~ConcreteElementA() {

}

void ConcreteElementA::Accept(Visitor* vis) {
	vis->VisitConcreteElementA(this);
	cout << "visiting ConcreteElementA..." << endl;
}

ConcreteElementB::ConcreteElementB() {

}

ConcreteElementB::~ConcreteElementB() {

}
void ConcreteElementB::Accept(Visitor* vis) {
	cout << "visiting ConcreteElementB..." << endl;
	vis->VisitConcreteElementB(this);
}