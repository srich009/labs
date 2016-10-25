#ifndef __OP_H__
#define __OP_H__

#include "base.h"

class Op: public Base
{
public:
    // data
    double value; // number value 
    
    /* Constructors */
    Op ();
    Op(double d);
    
    /* Virtual Functions */
    virtual double evaluate ();
};

#endif // __OP_H__