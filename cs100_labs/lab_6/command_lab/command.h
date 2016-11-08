#ifndef __COMMAND_CLASS__
#define __COMMAND_CLASS__

#include "composite.h"

class Command {
	protected:
		Base* root;
	
	public:
		Command() { };
		double execute() {
			return root->evaluate();
		};
		Base* get_root() {
			return root;
		};
};

class OpCommand : public Command {
	//OpCommand Code Here	
	public:
	OpCommand(double val)
	{
		root = new Op(val);
	}
	
	double execute() {
		return this->root->evaluate();
	};
	
	Base* get_root() {
		return this->root;
	};
	
};

class AddCommand : public Command {
	//AddCommand Code Here
	
	public:
	AddCommand(Command* ptr, double val) 
	{
		root = new Add(ptr->get_root() , new Op(val) );
	}
	
	double execute() {
		return (this->root->evaluate());
	};
	
};

class SubCommand : public Command {
	//SubCommand Code Here
	public:
	SubCommand(Command* ptr, double val) 
	{
		root = new Sub(ptr->get_root() , new Op(val) );
	}
	
	double execute() {
		return (this->root->evaluate());
	};
};

class MultCommand : public Command {
	//MultCommand Code Here

	public:
	MultCommand(Command* ptr, double val) 
	{
		root = new Mult(ptr->get_root() , new Op(val) );
	}
	
	double execute() {
		return (this->root->evaluate());
	};
};

class SqrCommand : public Command {
	//SqrCommand Code Here
	
	public:
	SqrCommand(Command* ptr)
	{
		
		root = new Sqr(ptr->get_root());
	}
	
	double execute() {
		return root->evaluate();
	};

	
};

#endif //__COMMAND_CLASS__
