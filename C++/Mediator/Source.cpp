#include "Mediator.h"
#include <iostream> 

using namespace std;
int main(int argc, char* argv[]) {
	ConcreteMediator* m = new ConcreteMediator();
	ConcreteColleageA* c1 = new ConcreteColleageA(m); 
	ConcreteColleageB* c2 = new ConcreteColleageB(m);
	m->IntroColleage(c1, c2);
	c1->SetState("old"); 
	c2->SetState("old");
	c1->Aciton(); 
	c2->Aciton(); 
	cout << endl;

	c1->SetState("new");
	c1->Aciton(); 
	c2->Aciton();
	cout << endl;
	
	c2->SetState("old");
	c2->Aciton(); 
	c1->Aciton();
	return 0;
}