#include <iostream>
#include "linkedlist.h"
#include "type.h"

using namespace std;
const int nElem=5;
int main() {
  TX vect[nElem]={1,2,3,4,5};
  LinkedList<TX> mylist;
  for(auto x=0; x<nElem; x++)
  {   
    mylist.insert_at_tail(vect[x]);
    mylist.print(cout);
    cout<< "" <<endl;
  }

 
 
}
