#ifndef __SQR_H__
#define __SQR_H__

#include "base.h"
#include <string>


class Sqr: public Base
{
    
public:
std::string x;
Base* child;

/* Constructors */
Sqr();
Sqr(Base*);

/* Virtual Functions */
virtual double evaluate();

};

#endif // __SQR_H__