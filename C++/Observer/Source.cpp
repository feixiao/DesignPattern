#include "Observer.h"
#include <iostream> 
using namespace std;
int main(int argc, char* argv[]) {
	ConcreteSubject* sub = new ConcreteSubject();
	Observer* o1 = new ConcreteObserverA(sub);
	Observer* o2 = new ConcreteObserverB(sub);
	o1->PrintInfo();
	o2->PrintInfo();

	sub->SetState("old");
	sub->Notify();

	o1->PrintInfo();
	o2->PrintInfo();

	sub->SetState("new"); 
	sub->Notify();

	o1->PrintInfo();
	o2->PrintInfo();

	delete o1;
	delete o2; 
	delete sub;
	
	return 0;
}