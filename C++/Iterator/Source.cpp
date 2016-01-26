#include "Iterator.h" 
#include <iostream> 

using namespace std;
int main(int argc, char* argv[]) {

	Aggregate* ag = new ConcreteAggregate();
	Iterator* it = new ConcreteIterator(ag);
	for (; !(it->IsDone()); it->Next())	{
		cout << it->CurrentItem() << endl;
	}

	delete it;
	delete ag;
	return 0;
}