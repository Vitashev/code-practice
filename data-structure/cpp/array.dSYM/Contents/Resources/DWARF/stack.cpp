#include <iostream>
using namespace std;

class Trie {
private:
    struct node{
        node* alp[26];
        bool isend;
    };
    node* root;
    node* createNode(){
        node* newnode=new node();
        for(int i=0; i<26; i++){
            newnode->alp[i]=nullptr;
        }
        newnode->isend=false;
        return newnode;
    }
public:
    /** Initialize your data structure here. */
    Trie() {
        root=createNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        node* head=root;
        for(int i=0; i<word.length(); i++){
            if(head->alp[int(word[i]-'a')]==nullptr){
                node* newnode=createNode();
                head->alp[int(word[i]-'a')]=newnode;
            }
            head=head->alp[int(word[i]-'a')];
        }
        head->isend=true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        node* head=root;
        for(int i=0; i<word.length(); i++){
            if(head->alp[int(word[i]-'a')]==nullptr){
                return false;
            }
            head=head->alp[int(word[i]-'a')];
        }
        if(head->isend){return true;}
        return false;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        node* head=root;
        for(int i=0; i<prefix.length(); i++){
            if(head->alp[int(prefix[i]-'a')]==nullptr){
                return false;
            }
            head=head->alp[int(prefix[i]-'a')];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */


// template<class T>
class Stack {
   // T value;
   // Stack *prev;
   // Stack *next;

   // Stack *tail;
   // Stack *head;

   public:
      struct Element {
         int value;
         Element* prev;
         Element* next;
      };
      Element* root;
      Element* tail;
      Element* head;
      static int length;
      Stack(int item){
         Element* el = new Element();
         el->value = item;
         el->prev = nullptr;
         el->next = nullptr;

         root = el;
         tail = root;
         head = root;
         ++length;
      };
      void pushHead(int item){
         Element* el = new Element();
         el->value = item;

         el->prev = head;
         el->next = nullptr;
         head = el;
         ++length;
      };
      void pushTail(int item) {
         Element* el = new Element();
         el->value = item;
         el->prev = nullptr;
         el->next = tail;
         tail = el;
         ++length;

      }
};

int main () {
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double;   // Request memory for the variable
 
   *pvalue = 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.
   int n  = 30;
   int n2  = 40;
   // Stack<int> stack(n);
    Stack* stack = new Stack(n);
    stack->pushHead(n2);
    cout << "Value of pvalue : " << stack->tail->prev->value << endl;
   // struct Element {
   //       int value;
   //       Element *prev;
   //       Element *next;
   //    };

   //   Element e;  

   //   e.value = 3;
   //   e.next = NULL;
   //   e.prev = NULL;

   //   Element e2;  

   //   e2.value = 5;
   //   e2.next = &e;
   //   e2.prev = &e;

   //  stack.element.next = 1
   // cout << "Value of pvalue : " << stack.*tail;

   return 0;
}