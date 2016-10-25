#include <iostream>
#include <string>

// include necessary classes part1
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include "sqr.h"
#include "base.h"
#include "op.h"
#include "floor.h"
#include "ceil.h"
#include "abs.h"

using namespace std ;

int main () 
{
       
    // initialize 
    Op*   neg = new Op(-1.1);
    Op*   op7 = new Op(7.1);
    Op*   op4 = new Op(4.2);
    Op*   op3 = new Op(3.6);
    Op*   op2 = new Op(2.7);
    Mul*    A = new Mul(op7, op4);
    Add*    B = new Add(op3, A);
    Sub*    C = new Sub(B, op2);
    Sqr*    D = new Sqr(C);
    Div*    E = new Div(op4, op2); //test
    Div*    F = new Div(op7, op3); //test  
    Ceil*   G = new Ceil(op7);
    Floor*  H = new Floor(A);
    Abs*    I = new Abs(neg);
    Floor*  J = new Floor(I);
    
    
    // Output results of eval - PART 1 TEST
    cout << op7 -> evaluate() << endl;
    cout << op4 -> evaluate() << endl;
    cout << op3 -> evaluate() << endl;
    cout << op2 -> evaluate() << endl;
    cout << A -> evaluate() << endl;
    cout << B -> evaluate() << endl;
    cout << C -> evaluate() << endl;
    cout << D -> evaluate() << endl;
    cout << E -> evaluate() << endl;
    cout << F -> evaluate() << endl;
    cout << G -> evaluate() << endl;
    cout << H -> evaluate() << endl;
    cout << I -> evaluate() << endl;
    cout << J -> evaluate() << endl;
    
    return 0;
}