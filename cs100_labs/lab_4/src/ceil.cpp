#include "ceil.h"

Ceil::Ceil()
:x("Ceil"), child(0)
{}

Ceil::Ceil(Base* a)
:x("Ceil"), child(a)
{}

double Ceil::evaluate()
{
    return( ceil( child->evaluate() ) );
}