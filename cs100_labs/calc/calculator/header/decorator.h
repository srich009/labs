#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "composite.h"
#include "visitor.h"

#include <iostream>
#include <sstream>
#include <math.h>
#include <string>

using namespace std;

// forward declare to avoid circular dependencies
class Op;
class Iterator;
class NullIterator;
class UnaryIterator;
class PreOrderIterator;
class OperatorIterator;
class Visitor;
class PrintVisitor;


// Abstract
class Decorator : public Base
{
    public: 
        Decorator() {};
        
        virtual void print() = 0;
        virtual double evaluate() = 0;
        virtual Base* get_left() = 0;
        virtual Base* get_right() = 0;
        virtual Iterator* create_iterator() = 0;
        virtual void accept( Visitor* ) = 0;
};
//---------------------------------

// Concrete
class Abs : public Decorator
{
    public:
        Base* child;
        
        Abs() : Decorator(), child(0) {};
        Abs(Base* b) : Decorator(), child(b) {};
        
        void print() { cout << "Abs"; }
        
        double evaluate()
        {
            return( fabs( child->evaluate() ) );
        }
        
        Base* get_left() { return child; }
        
        Base* get_right() { return NULL; }
        
        Iterator* create_iterator() { return new UnaryIterator( this ); }
        
        void accept( Visitor* v ) { v -> absNode(); }
};
//---------------------------------


class Ceil : public Decorator
{
    public:
        Base* child;
        
        Ceil() : Decorator(), child(0) {};
        Ceil(Base* b) : Decorator(), child(b) {};
        
        void print() { cout << "Ceil"; }
        
        double evaluate()
        {
            return( ceil( child->evaluate() ) );
        }
  
        Base* get_left() { return child; }
        
        Base* get_right() { return NULL; }
        
        Iterator* create_iterator() { return new UnaryIterator( this ); }
        
        void accept( Visitor* v ) { v -> ceilNode(); }
};
//---------------------------------


class Floor : public Decorator
{
    public:
        Base* child;
        
        Floor() : Decorator(), child(0) {};
        Floor(Base* b) : Decorator(), child(b) {};
        
        void print() { cout << "Floor"; }
        
        double evaluate()
        {
            return( floor( child->evaluate() ) );
        }

        Base* get_left() { return child; }
        
        Base* get_right() { return NULL; }

        Iterator* create_iterator() { return new UnaryIterator( this ); }
        
        void accept( Visitor* v ) { v -> floorNode(); }
};
//---------------------------------


#endif // __DECORATOR_H__