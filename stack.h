#ifndef  _stack_h_
#define  _stack_h_

#include <iostream>
#include "lista.h"
using namespace std;
template <typename T>

class stack{
  private:
  linkedlist <T> m_list;
  public:
  stack () {}
  void push (T n)   { m_list.insert_at_head(n); }
  ostream &print(ostream &os);
  
};
template <typename T>
ostream &stack<T>::print(ostream &os)
{   return m_list.print(os);
}
#endif