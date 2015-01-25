#include "listElem.h"

class Stack
{
    public:
    Stack(void);
    void push(ListElem* newElem);
    void pop(void);
    
    ListElem* getHead(void);
    int getCount(void);
    bool isEmpty(void);
    
    private:
    ListElem* m_head;
    int m_elCount;
};