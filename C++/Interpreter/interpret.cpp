#include "interpret.h" 
#include <iostream> 
using namespace std;

AbstractExpression::AbstractExpression() {

}

AbstractExpression::~AbstractExpression() {

}

void AbstractExpression::Interpret(const Context& c) {

}

TerminalExpression::TerminalExpression(const string& statement) { 
	this->_statement = statement; 
}

TerminalExpression::~TerminalExpression() {

}
void TerminalExpression::Interpret(const Context& c) { 
	cout<<this->_statement<<" TerminalExpression"<<endl; 
}

NonterminalExpression::NonterminalExpression(AbstractExpression* expression,int times) {
	this->_expression = expression;
	this->_times = times;
}

NonterminalExpression::~NonterminalExpression() {
	if (NULL != this->_expression){
		delete this->_expression;
	}
}

void NonterminalExpression::Interpret(const Context& c) { 
	for (int i = 0; i < _times ; i++) { 
		this->_expression->Interpret(c); 
	} 
}
