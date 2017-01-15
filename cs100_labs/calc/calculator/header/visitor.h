#ifndef __VISITOR_H__
#define __VISITOR_H__

#include <iostream>
#include <sstream>
#include "composite.h"
#include "iterator.h"

class Op;
class Iterator;
class NullIterator;
class UnaryIterator;
class PreOrderIterator;

class Visitor {

    public:
        Visitor(){};
        virtual void rootNode() {};      // For visiting a root node (do nothing)
        virtual void opNode(Op* op) = 0; // For visiting a leaf node
        virtual void addNode() = 0;      // For visiting an add node
        virtual void subNode() = 0;      // For visiting a subtraction node
        virtual void multNode()= 0;      // For visiting a multiply node
        virtual void divNode()= 0;      // For visiting a divide node
        virtual void sqrNode() = 0;      // For visiting a square node
        virtual void execute() = 0;      // Print all visited nodes
};
//-------------------------------------------------------------------


class PrintVisitor : public Visitor {

    private:
        std::string output;
        
    public:
        PrintVisitor() {};   // (do nothing)
        
        void rootNode() {};  // For visiting a root node (do nothing)
        
        void opNode(Op* op); // For visiting a leaf node (see visitor.cpp)
        
        void addNode()       // For visiting an add node
        {
            output += " +";
        }
        //----------------------------------------
                
        void subNode()      // For visiting a subtraction node
        {
            output += " -";
        }
        //----------------------------------------
        
        void multNode()     // For visiting a multiply node
        {
            output += " *";
        }
        //----------------------------------------
        
        void divNode()      // For visiting divide node
        {
            output += " /";
        }
        
        void sqrNode()      // For visiting a square node
        {
            output += " ^2";
        }
        //----------------------------------------
        
        void execute()      // Print all visited nodes
        {
            std::cout << output << std::endl;
        }
        //----------------------------------------

};
//-------------------------------------------------------------------

#endif // __VISITOR_H__

/*

operation in visitor.cpp because of

"error: invalid use of incomplete type ‘class Op’"

*/