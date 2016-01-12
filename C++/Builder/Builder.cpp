#include "Builder.h"

#include <iostream> 

using namespace std;

Product::Product() 
{ 
	ProducePart();
	cout<<"return a product"<<endl; 
}

Product::~Product() 
{

}
void Product::ProducePart() 
{ 
	cout<<"build part of product.."<<endl; 
}

ProductPart::ProductPart() 
{ 
	//cout<<"build productpart.."<<endl;
}
ProductPart::~ProductPart() 
{

}
ProductPart* ProductPart::BuildPart() 
{ 
	return new ProductPart; 
}
Builder::Builder() 
{

}
Builder::~Builder() 
{

}
ConcreteBuilder::ConcreteBuilder()
{

}
ConcreteBuilder::~ConcreteBuilder()
{

}
void ConcreteBuilder::BuildPartA(const string& buildPara) 
{ 
	cout<<"Step1:Build PartA..." << buildPara<<endl; 
}
void ConcreteBuilder::BuildPartB(const string& buildPara) 
{ 
	cout<<"Step1:Build PartB..."<<buildPara<<endl; 
}
void ConcreteBuilder::BuildPartC(const string& buildPara)
{ 
	cout<<"Step1:Build PartC..."<<buildPara<<endl; 
}	
Product* ConcreteBuilder::GetProduct() 
{ 
	BuildPartA(std::string("pre-defined"));
	BuildPartB(std::string("pre-defined"));
	BuildPartC(std::string("pre-defined"));
	return new Product(); 
}
Director::Director(Builder* bld)
{ 
	_bld = bld;
}
Director::~Director() 
{

}
void Director::Construct() 
{ 
	_bld->BuildPartA("user-defined"); 
	_bld->BuildPartB("user-defined"); 
	_bld->BuildPartC("user-defined"); 
}