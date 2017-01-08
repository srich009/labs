#include "floor.h"

Floor::Floor()
:x("Floor"), child(0)
{}

Floor::Floor(Base* a)
:x("Floor"), child(a)
{}

double Floor::evaluate()
{
    return( floor( child->evaluate() ) );
}