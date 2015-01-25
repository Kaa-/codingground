#include "stack.h"

Stack::Stack(void)
{
    m_head = NULL;
    m_elCount = 0;
}

void Stack::push(ListElem* newElem)
{
    cout << "Adding a new Element to a stack with value: " 
    << newElem->getValue() << endl;
    
    if(isEmpty())
    {
        m_head = newElem;
    }
    else
    {
        newElem->setNext(m_head);
        m_head->setPrev(newElem);
        
        m_head = newElem;
    }
    
    m_elCount++;
}

void Stack::pop(void)
{
    if(!isEmpty())
    {
        cout << "Popping the top Element with value: " 
             << m_head->getValue() << endl;
        
        
        if (m_head->getNext() != NULL)
        {
            ListElem* nextElem = m_head->getNext();
            
            m_head->setNext(NULL);
            nextElem->setPrev(NULL);
            
            delete m_head;
            
            m_head = nextElem;
        }
        else
        {
            delete m_head;
            
            m_head = NULL;
        }
        
        m_elCount--;
    }
    else cout << "Trying to pop an Element from an empty Stack" << endl;
}

int Stack::getCount(void) { return m_elCount; }

ListElem* Stack::getHead(void) { return m_head; }

bool Stack::isEmpty(void) { return m_head == NULL; }