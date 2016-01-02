#include "AbstractFactory.h"
#include <iostream> 

using namespace std;
int main(int argc,char* argv[]) 
{ 
	AbstractFactory* cf1 = new ConcreteFactory1();
	delete cf1->CreateProductA(); 
	delete cf1->CreateProductB();
	delete cf1;

	AbstractFactory* cf2 = new ConcreteFactory2(); 
	delete cf2->CreateProductA(); 
	delete cf2->CreateProductB();
	delete cf2;
	
    return 0; 
}