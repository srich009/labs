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

class Visitor 
{
    public:
        Visitor(){};
        virtual void rootNode(){}; //For visiting a root node (do nothing)
        virtual void sqrNode() = 0; //For visiting a square node
        virtual void multNode()= 0; //For visiting a multiple node
        virtual void subNode() = 0; //For visiting a subtraction node
        virtual void addNode() = 0; //For visiting an add node
        virtual void opNode(Op* op) = 0; //For visiting a leaf node
        virtual void execute() = 0; //Prints all visited nodes
};


class PrintVisitor : public Visitor 
{
    private:
        std::string output;
    public:
        PrintVisitor();
        void rootNode(){}; //For visiting a root node (do nothing)
        void sqrNode(); //For visiting a square node
        void multNode(); //For visiting a multiple node
        void subNode(); //For visiting a subtraction node
        void addNode(); //For visiting an add node
        void opNode(Op* op); //For visiting a leaf node
        void execute(); //Prints all visited nodes
};

#endif // __VISITOR_H__