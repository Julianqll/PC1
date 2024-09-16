#include <iostream>
#include "queue.h"
#include "stack.h"
#include "type.h"
#include "operators.h"

using namespace std;

int main() {
  
  Queue<L>    Myqueue;
  stack<L>    Mystack;
  L vect[10] = {5,9,6,20,32,4,82,11,10,63};
  for (auto x=0; x<10; x++){    
      //Myqueue.insert(vect[x]); 
      if (vect[x] % 2 ==0){
        Myqueue.insert(vect[x]);
    }  else Mystack.push(vect[x]);
      
  }
  cout<<"Numeros Pares: " <<Myqueue <<endl;
  cout<<"Numeros Impares: " <<Mystack;
  
}