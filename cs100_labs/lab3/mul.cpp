#include "mul.h"
 
using namespace std;

//Default constructor
Mult::Mult()
:x('*'), childLeft(0), childRight(0)
{}

//Constructor with to operands
Mult::Mult(Base* a, Base* b)
:x('*'), childLeft(a), childRight(b)
{}

//Evaluates multiplication
double Mult::evaluate()
{
    return ( childLeft->evaluate() * childRight->evaluate() );
}