#include "stack.h"

int main()
{
    cout << "-> Starting main Programm..." << endl;
    cout << "Creating some stack elements..." << endl;
   
    ListElem* myStackElem1 = new ListElem(10);
    ListElem* myStackElem2 = new ListElem(312);
    ListElem* myStackElem3 = new ListElem(674);
    
    cout << "Creating a stack... " << endl;
    Stack* myStack = new Stack();
    
    cout << "Putting some elements into the Stack..." << endl;
    myStack->push(myStackElem1);
    myStack->push(myStackElem2);
    myStack->push(myStackElem3);
    
    if(!myStack->isEmpty())
    cout << endl << "Ontop of the stack lies the El. with value: " 
         << myStack->getHead()->getValue() << " and there are "
         << myStack->getCount() << " Elements total." << endl;
    
    cout << endl << "Popping some elements from the Stack..." << endl;
    myStack->pop();
    myStack->pop();
    myStack->pop();
    
   
   return 0;
}

