#include "container.h"
#include "listCont.h"

// push the top pointer of the tree into container
void ListContainer::add_element(Base* element)
{
    mem.push_back(element);
}
//--------------------------------------------------------------

// iterate through trees and output values
void ListContainer::print()
{
    for(std::list<Base*>::iterator it = mem.begin(); it != mem.end(); it++)
    {
        std::cout << (*it)->evaluate() << ", ";
    }
    std::cout << std::endl;
}
//--------------------------------------------------------------

// calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
void ListContainer::sort()
{
    try
    {
        //sort_function->sort(); //??
    }
    catch(std::exception& e)
    {
        throw e.what();
    }
}
//--------------------------------------------------------------

/* Essentially the only functions needed to sort */
//switch tree locations
void ListContainer::swap(int i, int j)
{
    
        
    std:: cout << i << ' ' << j << std::endl;
}
//--------------------------------------------------------------

// get top ptr of tree at index i
Base* ListContainer::at(int i)
{
    int cnt = 0;
    for(std::list<Base*>::iterator it = mem.begin(); it != mem.end(); it++)
    {
        if(i == cnt)
        {
            return *it; // pointer
        }
        cnt++;
    }
    return 0;
}
//--------------------------------------------------------------

// return container size
int ListContainer::size()
{
    return mem.size(); // number
}
//--------------------------------------------------------------