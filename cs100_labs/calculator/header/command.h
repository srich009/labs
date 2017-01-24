#ifndef __COMMAND_CLASS__
#define __COMMAND_CLASS__

#include "composite.h"
#include "decorator.h"

class Command {
	
	protected:
		Base* root;
	
	public:
		Command() {};
		
		double execute() 
		{
			return root -> evaluate();
		}
		
		Base* get_root() 
		{
			return root;
		}
};
//-------------------------------------

class OpCommand : public Command {
	
	public:
		OpCommand( double val )
		{
			root = new Op( val );
		}
		
		double execute() 
		{
			return this -> root -> evaluate();
		}
		
		Base* get_root() 
		{
			return this -> root;
		}
};
//-------------------------------------

class AddCommand : public Command {

	public:
		AddCommand( Command* ptr,  double val ) 
		{
			root = new Add( ptr->get_root() , new Op(val) );
		}
		
		double execute() 
		{
			return ( this -> root -> evaluate() );
		}
};
//-------------------------------------

class SubCommand : public Command {

	public:
		SubCommand( Command* ptr , double val ) 
		{
			root = new Sub( ptr->get_root() , new Op(val) );
		}
		
		double execute() 
		{
			return ( this -> root -> evaluate() );
		}
};
//-------------------------------------

class MultCommand : public Command {

	public:
		MultCommand( Command* ptr , double val ) 
		{
			root = new Mult( ptr->get_root() , new Op(val) );
		}
		
		double execute() 
		{
			return ( this -> root -> evaluate() );
		}
};
//-------------------------------------

class DivCommand : public Command {

	public:
		DivCommand( Command* ptr , double val ) 
		{
			root = new Div( ptr->get_root() , new Op(val) );
		}
		
		double execute() 
		{
			return ( this -> root -> evaluate() );
		}
};
//-------------------------------------

class SqrCommand : public Command {
	
	public:
		SqrCommand( Command* ptr )
		{
			
			root = new Sqr( ptr -> get_root() );
		}
		
		double execute() 
		{
			return root -> evaluate();
		}
};
//-------------------------------------

class AbsCommand : public Command { // decorator
	
	public:
		AbsCommand( Command* ptr )
		{
			
			root = new Abs( ptr -> get_root() );
		}
		
		double execute() 
		{
			return root -> evaluate();
		}
};
//-------------------------------------

class CeilCommand : public Command { // decorator
	
	public:
		CeilCommand( Command* ptr )
		{
			
			root = new Ceil( ptr -> get_root() );
		}
		
		double execute() 
		{
			return root -> evaluate();
		}
};
//-------------------------------------

class FloorCommand : public Command { // decorator
	
	public:
		FloorCommand( Command* ptr )
		{
			
			root = new Floor( ptr -> get_root() );
		}
		
		double execute() 
		{
			return root -> evaluate();
		}
};
//-------------------------------------

#endif //__COMMAND_CLASS__
