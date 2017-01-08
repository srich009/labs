#include "sub.h"
 
using namespace std;

//Default constructor
Sub::Sub()
:x('-'), childLeft(0), childRight(0)
{}

//Constructor with to operands
Sub::Sub(Base* a, Base* b)
:x('-'), childLeft(a), childRight(b)
{}

//Evaluates Subition
double Sub::evaluate()
{
    return ( childLeft->evaluate() - childRight->evaluate() );
}