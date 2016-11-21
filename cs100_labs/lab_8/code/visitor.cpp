#include "visitor.h"

PrintVisitor::PrintVisitor() : Visitor()
{
}

void PrintVisitor::sqrNode() //For visiting a square node
{
    output += " ^2";
}

void PrintVisitor::multNode() //For visiting a multiple node
{
    output += " *";
}

void PrintVisitor::subNode() //For visiting a subtraction node
{
    output += " -";
}

void PrintVisitor::addNode() //For visiting an add node
{
    output += " +";
}

void PrintVisitor::opNode(Op* op) //For visiting a leaf node
{
    double d = op->evaluate();
    stringstream ss;
    std::string g;
    ss << d;
    ss >> g;
    output += " ";
    output += g;

}

void PrintVisitor::execute() //Prints all visited nodes
{
    std::cout << output << std::endl;
}
