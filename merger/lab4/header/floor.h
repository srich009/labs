#ifndef _FLOOR_H_
#define _FLOOR_H_

#include "base.h"
#include <string>

class Floor : public Base
{

public:
std::string x;
Base* child;

// COnstructor
Floor();
Floor(Base*);
    
/* Virtual Functions */
virtual double evaluate();
    
};

#endif //_FLOOR_H_