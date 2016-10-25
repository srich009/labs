#include "container.h"
#include "vectCont.h"


// push the top pointer of the tree into container
void VectorContainer::add_element(Base* element)
{
    mem.push_back(element);
}
//--------------------------------------------------------------

// iterate through trees and output values
void VectorContainer::print()
{
    for(unsigned i = 0; i < mem.size(); i++)
    {
        std::cout << mem.at(i)->evaluate() << ", ";
    }
    std::cout << std::endl;
}
//--------------------------------------------------------------

// calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
void VectorContainer::sort()
{
    try
    {
        sort_function->sort(this); //??
    }
    catch(std::exception& e)
    {
        throw e.what();
    }
}
//--------------------------------------------------------------

/* Essentially the only functions needed to sort */
//switch tree locations
void VectorContainer::swap(int i, int j)
{
    Base* temp = mem.at(i);
    mem.at(i) = mem.at(j);
    mem.at(j) = temp;
}
//--------------------------------------------------------------

// get top ptr of tree at index i
Base* VectorContainer::at(int i)
{
    return mem.at(i); // pointer
}
//--------------------------------------------------------------

// return container size
int VectorContainer::size()
{
    return mem.size(); // number
}
//--------------------------------------------------------------