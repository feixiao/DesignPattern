#include "Iterator.h"
#include <iostream> 
using namespace std;

Aggregate::Aggregate() {

}

Aggregate::~Aggregate() {

}

ConcreteAggregate::ConcreteAggregate() {
	for (int i = 0; i < SIZE; i++)
		_objs[i] = i;
}

ConcreteAggregate::~ConcreteAggregate() {

}

Iterator* ConcreteAggregate::CreateIterator() {
	return new ConcreteIterator(this);
}


Object ConcreteAggregate::GetItem(int idx) {
	if (idx < this->GetSize())
		return _objs[idx];
	else
		return -1;
}

int ConcreteAggregate::GetSize() {
	return SIZE;
}

Iterator::Iterator() {

}

Iterator::~Iterator() {

}

ConcreteIterator::ConcreteIterator(Aggregate* ag, int idx) {
	this->_ag = ag;
	this->_idx = idx;
}

ConcreteIterator::~ConcreteIterator() {

}

Object ConcreteIterator::CurrentItem() {
	return _ag->GetItem(_idx);
}

void ConcreteIterator::First() {
	_idx = 0;
}

void ConcreteIterator::Next() {
	if (_idx < _ag->GetSize()) _idx++;
}

bool ConcreteIterator::IsDone() {
	return (_idx == _ag->GetSize());
}
