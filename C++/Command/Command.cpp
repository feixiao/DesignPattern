#include <iostream>
#include "Command.h"

Reciever::Reciever() {

}

Reciever::~Reciever() {

}

void Reciever::Action() {
	std::cout << "Reciever action......." << std::endl;
}

Command::Command() {

}

Command::~Command() {

}

void Command::Excute() {

}

ConcreteCommand::ConcreteCommand(Reciever* rev) {
	this->_rev = rev;
}

ConcreteCommand::~ConcreteCommand() { delete this->_rev; }

void ConcreteCommand::Excute() {
	_rev->Action();
	std::cout << "ConcreteCommand..." << std::endl;
}

Invoker::Invoker(Command* cmd) { 
	_cmd = cmd; 
}

Invoker::~Invoker() { 
	delete _cmd; 
}


void Invoker::Invoke() {
	_cmd->Excute(); 
}