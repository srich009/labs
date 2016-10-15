// composite 

#ifndef __BASE_H__
#define __BASE_H__

class Base // Abstract base class
{
    
public:
/* Constructors */
Base () { };

/* Pure Virtual Functions */
virtual double evaluate () = 0;

};

#endif // __BASE_H__


/*

subclasses

--BINARY
    -add
    -sub
    -mul
    -div

--UNARY
    -sqr

--LEAF
    -op

*/