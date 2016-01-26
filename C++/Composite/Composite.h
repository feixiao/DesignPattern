#ifndef _COMPONENT_H_ 
#define _COMPONENT_H_

#include <iostream>
#include <vector>

using namespace std;

class Component {
public: 
	Component();
	virtual ~Component() = 0;

public: 
	virtual void Operation() = 0;
	virtual void Add(const Component&);
	virtual void Remove(const Component&);
	virtual Component* GetChild(int index);
};

class Composite :public Component {
public: 
	Composite();
	~Composite();

public: 
	void Operation();
	void Add(Component* com);
	void Remove(Component* com);
	Component* GetChild(int index);

private: 
	vector<Component*> comVec;
};

class Leaf :public Component {
public: 
	Leaf();
	~Leaf();
	void Operation();
};
#endif