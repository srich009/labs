#include "sqr.h"
 
using namespace std;

//Default constructor
Sqr::Sqr()
:x(std::string("^2")), child(0)
{}

//Constructor with to operands
Sqr::Sqr(Base* a)
:x(std::string("^2")), child(a)
{}

//Evaluates addition
double Sqr::evaluate()
{
    return ( child->evaluate() * child->evaluate() );
}