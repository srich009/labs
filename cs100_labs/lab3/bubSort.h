#ifndef __SORT_H__
#define __SORT_H__

#include "container.h"
#include "sort.h"

class BubbleSort : public Sort 
{
    
public:
/* Constructors */
BubbleSort();

/* inherited functions*/
virtual void sort(Container* container);

};

#endif //__BUBSORT_H__