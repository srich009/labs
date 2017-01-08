#include <iostream>
#include <string>

// include necessary classes
#include "header/composite.h"
#include "header/decorator.h"
#include "header/container.h"
#include "header/sort.h"

using namespace std ;

int main () 
{
       
    // initialize 
    Op*   op7 = new Op(7);
    Op*   op4 = new Op(4);
    Op*   op3 = new Op(3);
    Op*   op2 = new Op(2);
    Mul*    A = new Mul(op7, op4);
    Add*    B = new Add(op3, A);
    Sub*    C = new Sub(B, op2);
    Sqr*    D = new Sqr(C);
    Div*    E = new Div(op4, op2); //test
    Div*    F = new Div(op7, op3); //test    
    
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
    
    //PART2
    //-------------------------------------------------------
    
    // TEST VECTOR CONTAINER && SELECT_SORT
    VectorContainer* container1 = new VectorContainer();
    container1 -> add_element(A);
    container1 -> add_element(B);
    container1 -> add_element(C);
    container1 -> add_element(D);
    cout << "Container Before Sort: " << endl;
    container1 -> print();
    cout << "Container After Sort: " << endl;
    container1 -> set_sort_function(new SelectionSort());
    container1 -> sort();
    container1 -> print();
    
    std::cout << std::endl;
    
    // TEST LIST CONTAINER && BUBBLE_SORT
    ListContainer* container2 = new ListContainer();
    container2 -> add_element(A);
    container2 -> add_element(B);
    container2 -> add_element(C);
    container2 -> add_element(D);
    cout << "Container Before Sort: " << endl;
    container2 ->print();
    cout << "Container After Sort: " << endl;
    container2 -> set_sort_function(new BubbleSort());
    container2 -> sort();
    container2 -> print();
    
    std::cout << std::endl;

    // TEST VECTOR && BUBBLE
    VectorContainer* container3 = new VectorContainer();
    container3 -> add_element(A);
    container3 -> add_element(B);
    container3 -> add_element(C);
    container3 -> add_element(D);
    container3 -> add_element(E);
    container3 -> add_element(F);
    cout << "Container Before Sort: " << endl;
    container3 -> print();
    cout << "Container After Sort: " << endl;
    container3 -> set_sort_function(new BubbleSort());
    container3 -> sort();
    container3 -> print();

    std::cout << std::endl;

    // TEST List && SELECT
    // ListContainer* container4 = new ListContainer();
    // container4 -> add_element(A);
    // container4 -> add_element(B);
    // container4 -> add_element(C);
    // container4 -> add_element(D);
    // container4 -> add_element(E);
    // container4 -> add_element(F);
    // cout << "Container Before Sort: " << endl;
    // container4 -> print();
    // cout << "Container After Sort: " << endl;
    // container4 -> set_sort_function(new SelectionSort());
    // container4 -> sort();
    // container4 -> print();
    
    return 0;
}