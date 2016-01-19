#include "Proxy.h"
#include <iostream> 

using namespace std;

Subject::Subject() {

}

Subject::~Subject() {
	cout << "Subject::~Subject" << endl;
}

ConcreteSubject::ConcreteSubject() {

}

ConcreteSubject::~ConcreteSubject() {
	cout << "ConcreteSubject::~ConcreteSubject" << endl;
}
void ConcreteSubject::Request() { 
	cout << "ConcreteSubject......request ...." << endl; 
}

Proxy::Proxy() {

}

Proxy::Proxy(Subject* sub) { 
	_sub = sub;
}

Proxy::~Proxy() {
	delete _sub;
}

void Proxy::Request() {
	cout << "Proxy request...." << endl;
	_sub->Request();
}