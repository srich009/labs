#ifndef __DIV_H__
#define __DIV_H__

#include "base.h"

class Div: public Base
{
    
public:
char x;
Base* childLeft;
Base* childRight;

/* Constructors */
Div();
Div(Base*, Base*);

/* Virtual Functions */
virtual double evaluate ();

};

#endif // __DIV_H__