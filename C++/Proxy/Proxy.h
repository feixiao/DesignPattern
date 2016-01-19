#ifndef _PROXY_H_ 
#define _PROXY_H_

class Subject {
public: 
	virtual ~Subject();
	virtual void Request() = 0;
protected: 
	Subject();
};

class ConcreteSubject :public Subject {
public: 
	ConcreteSubject();
		
	~ConcreteSubject();
		
	void Request();
};

class Proxy {
public: 
	Proxy();
	Proxy(Subject* sub);
	~Proxy();
	void Request();
private: 
	Subject* _sub;
};
#endif