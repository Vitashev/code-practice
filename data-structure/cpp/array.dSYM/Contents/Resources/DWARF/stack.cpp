#include <iostream>
using namespace std;


template<class T>
class Stack {
   public:
      struct Element {
         T value;
         Element *prev;
         Element *next;
      } element;
      Element *tail;
      Element *head;
      Stack(T item){
         // struct Element element; 
         element.value = item;
         element.prev = NULL;
         element.next = NULL;
         // *tail = &element;
         // *head = &element;
      };
      T getTail(){
         return element.value;
      };
};

int main () {
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double;   // Request memory for the variable
 
   *pvalue = 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.
   int n  = 3;
   Stack<int> stack(n);


   cout << "Value of pvalue : " << stack.getTail()<< endl;

   return 0;
}