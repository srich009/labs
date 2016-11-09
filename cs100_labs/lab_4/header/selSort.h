#ifndef __SELSORT_H__
#define __SELSORT_H__

#include "container.h"
#include "sort.h"
#include <vector>

using namespace std;

class SelectionSort : public Sort 
{
    public:
    /* Constructors */
    SelectionSort(){}

    /* inherited Functions */
    virtual void sort(Container* container);
};

#endif //__SELSORT_H__