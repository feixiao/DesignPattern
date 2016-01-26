#ifndef _ITERATOR_H_
#define _ITERATOR_H_

class Iterator;

typedef int Object;

class Aggregate {
public:
	virtual ~Aggregate();
	virtual Iterator* CreateIterator() = 0;
	virtual Object GetItem(int idx) = 0;
	virtual int GetSize() = 0;
protected:
	Aggregate();
};

class ConcreteAggregate :public Aggregate {
public:
	enum { SIZE = 10};
	ConcreteAggregate();
	~ConcreteAggregate();
	Iterator* CreateIterator();
	Object GetItem(int idx);
	int GetSize();
private:
	Object _objs[SIZE];
};

class Iterator {
public: virtual ~Iterator();
		virtual void First() = 0;
		virtual void Next() = 0;
		virtual bool IsDone() = 0;
		virtual Object CurrentItem() = 0;
protected: 
	Iterator();
};

class ConcreteIterator :public Iterator {
public: ConcreteIterator(Aggregate* ag, int idx = 0);
		~ConcreteIterator();
		void First();
		void Next();
		bool IsDone();
		Object CurrentItem();
private:
	Aggregate* _ag;
	int _idx;
};
#endif