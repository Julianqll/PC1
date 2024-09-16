#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#include <iostream>
using namespace std;

template <typename T>
class linkedlist{
  class Node{ // Creacion de la clase nodo
    private:
      T   m_dato;
      Node *m_next;
    public:
      Node (T dato, Node* p_next = nullptr): //iniciando miembros
            m_dato(dato), m_next(p_next) {};

      T    getDato ()               {   return m_dato;    }  
      void setp_next (Node *p_next) {   m_next= p_next;    }
      Node *getp_next ()        {   return m_next;    }
      
  
  };
  private :
    Node* m_phead = nullptr,
        * m_ptail = nullptr;
    size_t  m_size =  0;
  public:
    void    insert_at_head (T elem);
    void    insert_at_tail (T elem);
    T       pop_head();
    size_t  size()  const {return m_size;};
    bool    empty() const {return size() ==0;};
    ostream & print (ostream &os);
};

template <typename T>
void linkedlist <T>::insert_at_head(T elem)
{
  Node *pNew = new Node (elem, m_phead);
  m_phead = pNew;
  m_size++;
};

template <typename T>
void linkedlist <T>::insert_at_tail(T elem)
{
  Node *pNew = new Node (elem);
  if (m_ptail)
  { m_ptail->setp_next(pNew);
  }
  m_ptail = pNew;
  if (!m_phead)
  { m_phead = pNew;  };
  m_size++;
};

template <typename T>
T linkedlist<T>::pop_head()
{
  if (m_phead)
  {
    Node *pNode = m_phead;
    T dato = pNode->getDato();
    m_phead = m_phead->getp_next(); 
    delete pNode;
    m_size--;
    return data;
  }
}
template <typename T>
ostream &linkedlist<T>::print(ostream &os)
{
  Node *pNode = m_phead;
  while (pNode)
  {
    os << pNode->getDato()<< " , ";
    pNode = pNode->getp_next();
  }
  cout << endl;
  return os;
}


#endif