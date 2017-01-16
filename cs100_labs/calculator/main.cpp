// Calculator main

#include <iostream>
#include <vector>
#include <stdlib.h>

#include "header/composite.h"
#include "header/menu.h"
#include "header/command.h"
#include "header/iterator.h"
#include "header/visitor.h"

using namespace std;

// local function
bool isInteger( const string& s );

int main() 
{
	cout << "Calculator Program" << endl;
	cout << "Enter Math Expressions OR Choose Menu Commands " << endl;
	
	Menu* menu = new Menu();
	string input;

	while( input != "exit" ) 
	{
		cout << ">> ";
		getline( cin , input );
		
		try
		{
			if( input == "exit" ) {
				break;
			}
			else if( input == "result" ) // display previous result
			{
				cout << "Result: ";
				menu -> execute();
			}
			else if( input == "redo" ) // redo last command
			{
				cout << "Redoing Command" << endl;
				menu -> redo();	
				cout << "Result: ";
				menu -> execute();
			}
			else if( input == "undo" ) // undo last command
			{
				cout << "Undoing Command" << endl;
				menu -> undo();
				cout << "Result: ";
				menu -> execute();
			}
			else if( isInteger( input ) ) // initialize with a number value (allows reinits now)
			{
				//if(!menu->initialized()) {
					menu -> add_command( new OpCommand( atoi( input.c_str() ) ) ); 
					cout << "Result: ";
					menu -> execute();
				//}
			}
			else if( input.substr(0,1) == "+" ) // add
			{
				if( menu -> initialized() ) 
				{
					if( isInteger( input.substr(2) ) ) 
					{
						menu -> add_command( new AddCommand( menu -> get_command() , atoi( ( input.substr(2) ).c_str() ) ) );
						cout << "Result: ";
						menu -> execute();
					}
				}
			}
			else if( input.substr(0,1) == "-" ) // subtract
			{
				if( menu -> initialized() ) 
				{
					if( isInteger( input.substr(2) ) ) 
					{
						menu -> add_command( new SubCommand( menu -> get_command() , atoi( ( input.substr(2) ).c_str() ) ) );
						cout << "Result: ";
						menu -> execute();
					}
				}
			}
			else if( input.substr(0,1) == "*" ) // multiply
			{
				if( menu -> initialized() ) 
				{
					if( isInteger( input.substr(2) ) ) 
					{
						menu -> add_command( new MultCommand( menu->get_command() , atoi( ( input.substr(2) ).c_str() ) ) );
						cout << "Result: ";
						menu -> execute();
					}
				}
			}
			else if( input.substr(0,1) == "/" ) // divide
			{
				if( menu -> initialized() ) 
				{
					if( isInteger( input.substr(2) ) ) 
					{
						menu -> add_command( new DivCommand( menu -> get_command() , atoi( ( input.substr(2) ).c_str() ) ) );
						cout << "Result: ";
						menu -> execute();
					}
				}
			}
			else if( input == "^" ) // square (^2)
			{
				if( menu -> initialized() ) 
				{
					menu -> add_command( new SqrCommand( menu -> get_command() ) );
					cout << "Result: ";
					menu -> execute();
				}
			}
			else 
			{
				cout << "Invalid Command: " << input << endl;
			}
			
		}
		catch( std::exception &e )
		{
			cout << e.what() << endl;
		}
	}

	return 0;
}
//=====================================================
//=====================================================


bool isInteger( const string& s ) 
{
	if( s.empty() ) 
	{
		return false;
	}

	char * p;
	strtol( s.c_str() , &p , 10 );
	return ( *p == 0 );
}
//----------------------------------------

