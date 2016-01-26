#include "Flyweight.h" 
#include <iostream> 
#include  <vector>

using namespace std;

Flyweight::Flyweight(string intrinsicState) {
	this->_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight() {

}

void Flyweight::Operation(const string& extrinsicState) {

}

string Flyweight::GetIntrinsicState() {
	return this->_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState) :Flyweight(intrinsicState) {
	cout << "ConcreteFlyweight Build....." << intrinsicState << endl;
}

ConcreteFlyweight::~ConcreteFlyweight() {
	cout << "ConcreteFlyweight::~ConcreteFlyweight()" << endl;
}

void ConcreteFlyweight::Operation(const string& extrinsicState) {
	cout << "ConcreteFlyweight: [" << this->GetIntrinsicState() << "]  [" << extrinsicState << "]" << endl;
}

FlyweightFactory::FlyweightFactory() {

}

FlyweightFactory::~FlyweightFactory() {
	vector<Flyweight*>::iterator it = _fly.begin();
	for (; it != _fly.end(); )
	{
		delete *it;
		it = _fly.erase(it);
	}
}

Flyweight* FlyweightFactory::GetFlyweight(const string& key)
{
	vector<Flyweight*>::iterator it = _fly.begin();
	for (; it != _fly.end(); it++)
	{
	
		if ((*it)->GetIntrinsicState() == key)
		{
			cout << "already created by users...." << endl;
			return *it;
		}
	}
	Flyweight* fn = new ConcreteFlyweight(key);
	_fly.push_back(fn);
	return fn;
}