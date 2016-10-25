#ifndef _CEIL_H_
#define _CEIL_H_

#include "base.h"
#include <string>

class Ceil : public Base
{
    
public:
std::string x;
Base* child;

// COnstructor
Ceil();
Ceil(Base*);
    
/* Virtual Functions */
virtual double evaluate();

};

#endif //_CEIL_H_