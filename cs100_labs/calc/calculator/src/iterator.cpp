#include "../header/iterator.h"


// UNARY ITERATOR
//============================================================
void UnaryIterator::first()
{
    this -> current_ptr = this -> self_ptr -> get_left();
}
//---------------------------------------------------
 
void UnaryIterator::next()
{
    current_ptr = self_ptr -> get_right();
}
//============================================================


// OPERATOR ITERATOR
//============================================================
void OperatorIterator::first()
{
    this -> current_ptr = this -> self_ptr -> get_left();
}
//---------------------------------------------------

void OperatorIterator::next()
{
    if( current_ptr == self_ptr -> get_left() )
    {
        current_ptr = self_ptr -> get_right();
    }
    else
    {
        current_ptr = 0;
    }
}
//============================================================
 

// PREORDER ITERATOR FUNCTIONS
//===============================================================
void PreOrderIterator::first() 
{
    //Empty the stack (just in case we had something leftover from another run)
    while( !iterators.empty() )
    {
        iterators.pop();
    }
    
    //Create an iterator for the Base* that we built the iterator for
    Iterator* iter = this -> self_ptr -> create_iterator();
    
    //Initialize that iterator and push it onto the stack
    if( iter ) 
    {
        iter -> first();
        this -> iterators.push(iter);
    }
}
//---------------------------------------------------

void PreOrderIterator::next()
{
    //Create an iterator for the item on the top of the stack
    Iterator* iter = this -> iterators.top() -> current() -> create_iterator();

    //Initialize the iterator and push it onto the stack
    if( iter ) 
    {
        iter -> first();
        this -> iterators.push(iter);
    }
    else
    {
        return; // err check?
    }
    
    //As long as the top iterator on the stack is done, pop it off the
    //stack and then advance whatever iterator is now on top of the stack
    while( !iterators.empty()  &&  iterators.top() -> is_done() )
    {
        Iterator* temp = iterators.top();
        iterators.pop();
        delete temp; // ***** COMPILER WARNS ABOUT THIS LINE *****
        temp = 0;
        if( iterators.size() == 0 ) // stop segfaults
        {
            break;
        }
        iterators.top() -> next();
    }

}
//---------------------------------------------------

bool PreOrderIterator::is_done() 
{
    //Return true if there are no more elements on the stack to iterate
    return iterators.empty(); // done if size == 0
}
//---------------------------------------------------

Base* PreOrderIterator::current() 
{
    //Return the current for the top iterator in the stack
    if( !iterators.empty() )
    {
        return iterators.top() -> current();
    }
    return 0;
}
//=========================================================================

