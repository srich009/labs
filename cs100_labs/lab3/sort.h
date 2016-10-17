#ifndef __SORT_H__
#define __SORT_H__

#include "container.h"
#include "base.h"

#include <iostream>

class Container;

class Sort 
{
public:
    /* Constructors */
    Sort(){}

    /* Pure Virtual Functions */
    virtual void sort(Container* container) = 0;
};

#endif //__SORT_H__