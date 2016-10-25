#ifndef __ADD_H__
#define __ADD_H__

#include "base.h"

class Add: public Base
{
    
public:
char x;
Base* childLeft;
Base* childRight;

/* Constructors */
Add ();
Add(Base*, Base*);

/* Virtual Functions */
virtual double evaluate ();

};

#endif // __ADD_H__