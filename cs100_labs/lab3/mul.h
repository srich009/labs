#ifndef __MUL_H__
#define __MUL_H__

#include "base.h"

class Mult: public Base
{
    
public:

char x;
Base* childLeft;
Base* childRight;

/* Constructors */
Mult();
Mult(Base* a, Base* b);

/* Virtual Functions */
virtual double evaluate();

};

#endif // __MUL_H__