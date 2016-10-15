#ifndef __VECTCONT_H__
#define __VECTCONT_H__

#include <iostream>
#include <vector>
#include <exception>

class VectorContainer : public Container
{
    
//Sort* sort_function;
    
private:
std::vector<Base*> mem;

public:
VectorContainer() : mem(0){};

/* ***INHERITED FROM CONTAINER*** */
// push the top pointer of the tree into container
virtual void add_element(Base* element);

// iterate through trees and output values
virtual void print();

// calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
virtual void sort();

/* Essentially the only functions needed to sort */
//switch tree locations
virtual void swap(int i, int j);

// get top ptr of tree at index i
virtual Base* at(int i);

// return container size
virtual int size();

};

#endif // __VECTCONT_H__