#include "memento.h"
#include <iostream> 

using namespace std;

int main(int argc,char* argv[]) { 
	Originator* o = new Originator();
	o->SetState("old"); //备忘前状态
	o->PrintState();

	Memento* m = o->CreateMemento(); //将状态备忘
	o->SetState("new"); //修改状态
	o->PrintState();
	o->RestoreToMemento(m); //恢复修改前状态
	o->PrintState();
	return 0;
}
