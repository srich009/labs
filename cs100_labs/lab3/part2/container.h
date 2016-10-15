// strategy

#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include "base.h"
#include "sort.h"

class Container 
{
    
protected:
Sort * sort_function;

public:
/* Constructors */
Container () : sort_function ( NULL ){};

Container ( Sort * function ) : sort_function ( function ) {};

/* Non Virtual Functions */
inline
void set_sort_function ( Sort * sort_function ){this->sort_function = sort_function}; // set the type of sorting algorithm

/* Pure Virtual Functions */
// push the top pointer of the tree into container
virtual void add_element ( Base * element ) = 0 ;

// iterate through trees and output values
virtual void print () = 0 ;

// calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
virtual void sort () = 0 ;

/* Essentially the only functions needed to sort */
//switch tree locations
virtual void swap ( int i , int j ) = 0 ;

// get top ptr of tree at index i
virtual Base * at ( int i ) = 0 ;

// return container size
virtual int size () = 0 ;

};

#endif //__CONTAINER_H__