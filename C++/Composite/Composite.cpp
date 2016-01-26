#include "Composite.h"

Component::Component() {

}

Component::~Component() {

}

void Component::Add(const Component& com) {

}

Component* Component::GetChild(int index) { 
	return 0; 
}

void Component::Remove(const Component& com) {

}

Composite::Composite() {  

}

Composite::~Composite() {
	vector<Component*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end();) { 
		if (NULL != *comIter){
			delete *comIter;
			comIter = comVec.erase(comIter); // 删除元素，返回值指向已删除元素的下一个位置
		}else {
			++comIter;
		}
	}
}

void Composite::Operation() {
	vector<Component*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end(); comIter++) 	{ 
		(*comIter)->Operation();
	}
}
void Composite::Add(Component* com) { 
	comVec.push_back(com); 
}

void Composite::Remove(Component* com) { 
	vector<Component*>::iterator comIter = comVec.begin();
	for (; comIter != comVec.end(); comIter++) { 
		if (*comIter == com){
			comIter = comVec.erase(comIter);
			delete com;
			break;
		}
	}
}

Component* Composite::GetChild(int index){ 
	return comVec[index]; 
}


Leaf::Leaf() {

}

Leaf::~Leaf() { 
	cout << "Leaf::~Leaf()" << endl; 
}

void Leaf::Operation() { 
	cout << "Leaf operation....." << endl; 
}