// iterator && visitor test

#include <iostream>
#include <vector>
#include "../header/composite.h"
#include "../header/iterator.h"
#include "../header/visitor.h"
#include "../header/decorator.h"

using namespace std;

int main() 
{

	Op* op3 = new Op(3);
	Op* op4 = new Op(4);
	Op* op2 = new Op(2);
	Add* add = new Add(op3, op4);
	Sqr* sqr = new Sqr(op2);
	Sub* sub = new Sub(add, sqr);
	Root* root = new Root(sub);
	
	PrintVisitor* pvis = new PrintVisitor();

	cout << "--- PreOrder Iteration ---" << endl;
	PreOrderIterator* pre_itr = new PreOrderIterator( root );
	for( pre_itr -> first(); !pre_itr -> is_done(); pre_itr -> next() ) 
	{
		pre_itr -> current() -> print();
		pre_itr -> current() -> accept( pvis );
		cout << endl;
	}
	pvis -> execute();
	
	
	
	// +++++++++++++++  part 2 +++++++++++++++++++
	
	
	    // initialize 
    Op*   neg = new Op(-1.1);
    Op*   op7 = new Op(7.1);
    Op*   op42 = new Op(4.2);
    Op*   op36 = new Op(3.6);
    Op*   op27 = new Op(2.7);
    
    Mult*    A = new Mult(op7, op4);
    Add*    B = new Add(op3, A);
    Sub*    C = new Sub(B, op2);
    Sqr*    D = new Sqr(C);
    Div*    E = new Div(op4, op2); //test
    Div*    F = new Div(op7, op3); //test 
    
    Ceil*   G = new Ceil(op7);
    Floor*  H = new Floor(A);
    Abs*    I = new Abs(neg);
    Floor*  J = new Floor(I);
	
	
	Root* root2 = new Root(J);
	
	PrintVisitor* pvis2 = new PrintVisitor();

	cout << "--- PreOrder Iteration ---" << endl;
	PreOrderIterator* pre_itr2 = new PreOrderIterator( root2 );
	for( pre_itr2 -> first(); !pre_itr2 -> is_done(); pre_itr2 -> next() ) 
	{
		pre_itr2 -> current() -> print();
		pre_itr2 -> current() -> accept( pvis2 );
		cout << endl;
	}
	pvis2 -> execute();
	
	
	
};
