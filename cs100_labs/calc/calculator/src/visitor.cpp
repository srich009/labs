#include "../header/visitor.h"

void PrintVisitor::opNode( Op* op ) // have to put here because of forward declare and incomplete class use in a header...
{
    double d = op -> evaluate();
    std::stringstream ss;
    std::string g;
    ss << d;
    ss >> g;
    output += " ";
    output += g;
}
//----------------------------------------
