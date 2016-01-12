#include "Builder.h"
#include <iostream>



int main(int argc,char* argv[]) 
{ 
	Director* d = new Director(new ConcreteBuilder());
	d->Construct();
	return 0; 
}