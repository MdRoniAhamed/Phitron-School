#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node * next;
    Node * prev;
    Node(int value)
    {
        this->value = value;
        next = NULL;
        prev = NULL;
    }

};

class Stack{

    Node * head;
    Node * top;

public:

  ///Push
  void push(int val)
  {
      Node * newNode = new Node(val);
      if(head==NULL)
      {
          head = top = newNode;
          return;
      }
      else{
        top->next = newNode;
        newNode->prev = top;
        top = newNode;
      }
  }


};

int main()
{

}
