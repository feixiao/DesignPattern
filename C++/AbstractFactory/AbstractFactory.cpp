#include "AbstractFactory.h"
#include <iostream>

using namespace std;
AbstractProductA::AbstractProductA() 
{

}

AbstractProductA::~AbstractProductA() 
{

}

AbstractProductB::AbstractProductB() 
{

}

AbstractProductB::~AbstractProductB()
{

}

ProductA1::ProductA1() 
{
	cout<<"ProductA1..."<<endl; 
}

ProductA1::~ProductA1() 
{

}
ProductA2::ProductA2() 
{ 
	cout<<"ProductA2..."<<endl; 
}
ProductA2::~ProductA2() 
{

}
ProductB1::ProductB1()
{
	cout<<"ProductB1..."<<endl; 
}
ProductB1::~ProductB1() 
{

}
ProductB2::ProductB2() 
{
	cout<<"ProductB2..."<<endl; 
}
ProductB2::~ProductB2()
{

}
AbstractFactory::AbstractFactory() 
{

}
AbstractFactory::~AbstractFactory()
{

}
ConcreteFactory1::ConcreteFactory1() 
{

}
ConcreteFactory1::~ConcreteFactory1() 
{

}
AbstractProductA* ConcreteFactory1::CreateProductA() 
{ 
	return new ProductA1(); 
}
AbstractProductB* ConcreteFactory1::CreateProductB() 
{ 
	return new ProductB1(); 
}
ConcreteFactory2::ConcreteFactory2()
{

}
ConcreteFactory2::~ConcreteFactory2() 
{

}
AbstractProductA* ConcreteFactory2::CreateProductA() 
{ 
	return new ProductA2(); 
}
AbstractProductB* ConcreteFactory2::CreateProductB() 
{ 
	return new ProductB2(); 
}