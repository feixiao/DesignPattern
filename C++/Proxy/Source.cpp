#include "Proxy.h"
#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
	Subject* sub = new ConcreteSubject();
	Proxy* p = new Proxy(sub);
	p->Request();
	delete p;
	return 0;
}