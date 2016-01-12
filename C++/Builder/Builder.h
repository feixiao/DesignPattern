#ifndef _BUILDER_H_
#define _BUILDER_H_

#include <iostream>

using namespace std;

class Product 
{ 
public: 
	Product();
	~Product();
	void ProducePart();
protected:
private:
};

class ProductPart 
{ 
public: 
	ProductPart();
	~ProductPart();
	ProductPart* BuildPart();
protected:
private:
};

class Builder 
{ 
public: 
	virtual ~Builder();
	virtual void BuildPartA(const string& buildPara) = 0;
	virtual void BuildPartB(const string& buildPara) = 0;
	virtual void BuildPartC(const string& buildPara) = 0;
	virtual Product* GetProduct() = 0;
protected: 
	Builder();
private:
};

class ConcreteBuilder:public Builder 
{ 
public: 
	ConcreteBuilder();
	~ConcreteBuilder();
	void BuildPartA(const string& buildPara);
	void BuildPartB(const string& buildPara);
	void BuildPartC(const string& buildPara);
	Product* GetProduct();
protected: 
private:
};

class Director 
{ 
public:
	Director(Builder* bld);
	~Director();
	void Construct();
protected:
private: 
	Builder* _bld;
};
#endif