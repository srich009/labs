#include "abs.h"

Abs::Abs()
:x("abs"), child(0)
{}

Abs::Abs(Base* a)
:x("abs"), child(a)
{}

double Abs::evaluate()
{
    return( fabs( child->evaluate() ) );
}