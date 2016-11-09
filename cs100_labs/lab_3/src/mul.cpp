#include "mul.h"
 
using namespace std;

//Default constructor
Mul::Mul()
:x('*'), childLeft(0), childRight(0)
{}

//Constructor with to operands
Mul::Mul(Base* a, Base* b)
:x('*'), childLeft(a), childRight(b)
{}

//Evaluates Muliplication
double Mul::evaluate()
{
    return ( childLeft->evaluate() * childRight->evaluate() );
}