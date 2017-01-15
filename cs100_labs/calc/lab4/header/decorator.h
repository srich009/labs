#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "composite.h"

// Abstract
class Decorator : public Base
{
    public: 
        Decorator() {};
        
        virtual double evaluate() = 0;
};
//---------------------------------

// Concrete
class Abs : public Decorator
{
    public:
        Base* child;
        
        Abs() : Decorator(), child(0) {};
        Abs(Base* b) : Decorator(), child(b) {};
        
        double evaluate()
        {
            return( fabs( child->evaluate() ) );
        }
};
//---------------------------------


class Ceil : public Decorator
{
    public:
        Base* child;
        
        Ceil() : Decorator(), child(0) {};
        Ceil(Base* b) : Decorator(), child(b) {};
        
        double evaluate()
        {
            return( ceil( child->evaluate() ) );
        }
};
//---------------------------------


class Floor : public Decorator
{
    public:
        Base* child;
        
        Floor() : Decorator(), child(0) {};
        Floor(Base* b) : Decorator(), child(b) {};
        
        double evaluate()
        {
            return( floor( child->evaluate() ) );
        }
};
//---------------------------------


#endif // __DECORATOR_H__