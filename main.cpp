#include <iostream>
#include "type.h"
#include "linkedlist.h"
//by jose terrones
using namespace std;

const TX nElem = 10;
TX main()
{
  TX valores[nElem] = {69, 7, 62, 45, 74, 85, 64, 79, 20, 1};
  LinkedList<TX> Prueba;
  cout<< "Proceso de Insercion"<<endl;
  for(auto x=0; x<nElem; x++)
  {
      Prueba.insert_at_tail(valores[x]);
      Prueba.print(cout);
  }
  cout<<endl<< "Linked List"<<endl;
  Prueba.print(cout);
} 