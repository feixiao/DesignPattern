#include "Composite.h"
#include <iostream> 
using namespace std;
int main(int argc, char* argv[]) {
	Leaf* l = new Leaf(); 
	l->Operation();

	Composite* com = new Composite();
	com->Add(l);
	com->Operation();

	Component* ll = com->GetChild(0);
	ll->Operation();

	delete com;
	
	return 0;
}