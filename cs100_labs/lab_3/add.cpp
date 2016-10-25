#include "add.h"
 
using namespace std;

//Default constructor
Add::Add()
:x('+'), childLeft(0), childRight(0)
{}

//Constructor with to operands
Add::Add(Base* a, Base* b)
:x('+'), childLeft(a), childRight(b)
{}

//Evaluates addition
double Add::evaluate()
{
    return ( childLeft->evaluate() + childRight->evaluate() );
}