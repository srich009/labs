#include "op.h"
 
using namespace std;

//Default constructor
Op::Op()
:value(0)
{}

//Double constructor
Op::Op(double d)
:value(d)
{}

//Evalutes and returns value
double Op::evaluate()
{
    return value;
}