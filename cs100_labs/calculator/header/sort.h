// Strategy Pattern for sorting algorithms

#ifndef __SORT_H__
#define __SORT_H__

#include "container.h"
#include "composite.h"

// forward declaration
class Container;

class Sort 
{
    public:
    
        Sort() {}

        virtual void sort(Container* container) = 0;
};
//--------------------------------------------------------

class SelectionSort : public Sort 
{
    public:
    
        SelectionSort() {}

        virtual void sort(Container* container);
};
//--------------------------------------------------------

class BubbleSort : public Sort 
{
    public:

        BubbleSort() {}

        virtual void sort(Container* container);
};
//--------------------------------------------------------


#endif //__SORT_H__