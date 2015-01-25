#include "listElem.h"


ListElem::ListElem(int init_value)
{
    m_value = init_value;
    m_nextElem = NULL;
    m_prevElem = NULL;
    
    cout << "New ListElem was created with value: " << init_value << endl;
}

int ListElem::getValue(void)
{
    return m_value;
}

ListElem* ListElem::getNext(void)
{
    return m_nextElem;
}

ListElem* ListElem::getPrev(void)
{
    return m_prevElem;
}
    
void ListElem::setNext(ListElem* nextElement)
{
    m_nextElem = nextElement;
}

void ListElem::setPrev(ListElem* prevElement)
{
    m_prevElem = prevElement;
}