#ifndef _FLYWEIGHT_H_ 
#define _FLYWEIGHT_H_

#include <string> 
#include <vector>

using namespace std;

class Flyweight {
public:
	virtual ~Flyweight();
	virtual void Operation(const string& extrinsicState);
	string GetIntrinsicState();
protected:
	Flyweight(string intrinsicState);
private:
	string _intrinsicState;
};

class ConcreteFlyweight :public Flyweight
{
public:
	ConcreteFlyweight(string intrinsicState);
	~ConcreteFlyweight();
	void Operation(const string& extrinsicState);
};

class FlyweightFactory 
{
public: 
	FlyweightFactory();
	~FlyweightFactory();
	Flyweight* GetFlyweight(const string& key);

private: 
	vector<Flyweight*> _fly;
};


#endif