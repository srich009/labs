#include "div.h"
 
using namespace std;

//Default constructor
Div::Div()
:x('/'), childLeft(0), childRight(0)
{}

//Constructor with to operands
Div::Div(Base* a, Base* b)
:x('/'), childLeft(a), childRight(b)
{}

//Evaluates division
double Div::evaluate()
{
    return ( childLeft->evaluate() / childRight->evaluate() );
}