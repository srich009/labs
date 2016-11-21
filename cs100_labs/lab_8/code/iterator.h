#ifndef __ITERATOR_H__
#define __ITERATOR_H__

#include <stack>

#include "composite.h"

class Base; // ?? forward declare


class Iterator 
{
 protected:
     Base* self_ptr;
     Base* current_ptr;
     
 public:
    Iterator(Base* ptr) { this->self_ptr = ptr; }
    
     /*Sets up the iterator to start at the beginning of traversal*/
     virtual void first() = 0;
     
     /*Move onto the next element*/
     virtual void next() = 0;
     
     /*Returns if you have finished iterating through all elements*/
     virtual bool is_done() = 0;
     
     /*Return the element the iterator is currently at*/
     virtual Base* current() = 0;
};
//---------------------------------------------


class OperatorIterator : public Iterator
{
public:
    OperatorIterator(Base* ptr) : Iterator(ptr) {}
    void first();
    void next();
    bool is_done() { return (this->current() == NULL); }
    Base* current() { return current_ptr; }
};
//---------------------------------------------


class UnaryIterator : public Iterator 
{
public:
    UnaryIterator(Base* ptr) : Iterator(ptr) {}
    void first();
    void next();
    bool is_done()  { return (this->current() == NULL); }
    Base* current() { return current_ptr; }
};
//---------------------------------------------


class NullIterator : public Iterator 
{
public:
    NullIterator(Base* ptr) : Iterator(ptr) {}
    void first() {return;}
    void next(){return;}
    bool is_done() {return true;}
    Base* current() {return 0;}
};
//---------------------------------------------

class PreOrderIterator : public Iterator 
{
protected:
    std::stack<Iterator*> iterators;
    
public:
    PreOrderIterator(Base* ptr)  : Iterator(ptr) {}
    void first();
    void next();
    bool is_done(); 
    Base* current();
};
//---------------------------------------------


#endif // __ITERATOR_H__