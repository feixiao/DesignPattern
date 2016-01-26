#ifndef _COMMAND_H_
#define _COMMAND_H_

class Reciever {
public: 
	Reciever();
	~Reciever();
	void Action();
};

class Command {
public: 
	virtual ~Command();
	virtual void Excute() = 0;
protected: 
	Command();
};

class ConcreteCommand :public Command {
public: 
	ConcreteCommand(Reciever* rev);
	~ConcreteCommand();
	void Excute();
private: 
	Reciever* _rev;
};

class Invoker {
public: 
	Invoker(Command* cmd);
	~Invoker();
	void Invoke();
private: 
	Command* _cmd;
};
#endif