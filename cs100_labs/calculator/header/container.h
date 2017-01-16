// Container classes for holding data

#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <exception>
#include <algorithm>

#include "composite.h"
#include "sort.h"

// Forward Declaration
class Sort;

// ABSTRACT
class Container 
{
    protected:
        Sort* sort_function;
        
    public:
        /* Constructors */
        Container() : sort_function(0){}; // NULL doesnt work
        Container(Sort* function) : sort_function(function) {};
    
        /* Non Virtual Functions */
        void set_sort_function(Sort* sort_function) {this->sort_function = sort_function;} // set the type of sorting algorithm
    
        /* Pure Virtual Functions */
        // push the top pointer of the tree into container
        virtual void add_element(Base* element) = 0;
    
        // iterate through trees and output values
        virtual void print() = 0;
    
        // calls on the previously set sorting-algorithm. Checks if sort_function is not null, throw exception if otherwise
        virtual void sort() = 0;
    
        /* Essentially the only functions needed to sort */
        //switch tree locations
        virtual void swap(int i, int j) = 0;
    
        // get top ptr of tree at index i
        virtual Base* at(int i) = 0;
    
        // return container size
        virtual int size() = 0;
};
//----------------------------------------------

// CONCRETE
class ListContainer : public Container
{
    private:
        std::list<Base*> mem;
    
    public:
        ListContainer() : mem(0) {};
    
        /* ***OTHER FUNCTIONS INHERITED FROM CONTAINER*** */
        /* Non Virtual Functions */
        void set_sort_function(Sort* sort_function) {this->sort_function = sort_function;} // set the type of sorting algorithm
    
        /* Pure Virtual Functions */
        void add_element(Base* element);

        void print();
    
        void sort();
    
        void swap(int i, int j);

        Base* at(int i);

        int size();
};
//----------------------------------------------

class VectorContainer : public Container
{
    private:
        std::vector<Base*> mem;

    public:
        VectorContainer() : mem(0) {};
        
        /* ***OTHER FUNCTIONS INHERITED FROM CONTAINER*** */
        /* Non Virtual Functions */
        void set_sort_function(Sort* sort_function) {this->sort_function = sort_function;} // set the type of sorting algorithm
    
        /* Pure Virtual Functions */
        void add_element(Base* element);

        void print();
    
        void sort();
    
        void swap(int i, int j);

        Base* at(int i);

        int size();
};
//-----------------------------------------------


#endif //__CONTAINER_H__