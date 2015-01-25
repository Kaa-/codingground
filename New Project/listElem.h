#ifndef listElem_h
#define listElem_h

// Move this somewhere nicer
#include <iostream>
using namespace std;

class ListElem 
{  
public:
    ListElem(int init_value);
    int getValue(void);
    
    ListElem* getNext(void);
    ListElem* getPrev(void);
    
    void setNext(ListElem* nextElement);
    void setPrev(ListElem* prevElement);

private:
    int m_value;
    
    ListElem* m_nextElem;
    ListElem* m_prevElem;
};

#endif