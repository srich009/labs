#ifndef __BUBSORT_H__
#define __BUBSORT_H__

#include "container.h"
#include "sort.h"
#include <vector>

using namespace std;

class BubbleSort : public Sort 
{
public:
    /* Constructors */
    BubbleSort(){}

    /* inherited functions*/
    virtual void sort(Container* container);
};

#endif //__BUBSORT_H__