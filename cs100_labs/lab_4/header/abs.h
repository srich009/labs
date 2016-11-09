#ifndef _ABS_H_
#define _ABS_H_

#include "base.h"
#include <string>

class Abs : public Base
{

public:
std::string x;
Base* child;

/* Constructors */
Abs();
Abs(Base*);

/* Virtual Functions */
virtual double evaluate();
    
};

#endif //_ABS_H_