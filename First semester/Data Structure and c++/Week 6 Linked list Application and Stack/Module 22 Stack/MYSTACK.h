#include<bits/stdc++.h>
using namespace std;
class Node
{
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

class Stack
{
    int count=0;
    Node * head;
    Node * top;

public:
    Stack()
    {
        head = NULL;
        top =NULL;
    }

    ///Push
    void push(int val)
    {
        Node * newNode = new Node(val);
        if(head==NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        else
        {
            top->next = newNode;
            newNode->prev = top;
            top = newNode;
            count++;
        }
    }

//  POP

    int pop()
    {
        Node *delNode;
        delNode = top;
        int chk = -1;
        if(head==NULL) ///There is no Element in the Stack.
        {
            cout<<"Stack Underflow "<<endl;
            return chk;
        }
        if(top==head)   ///There is only one element.
        {
            head = top = NULL;
        }
        else    ///There is More than one element.
        {
            top = delNode->prev;
            top->next = NULL;
        };
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }
/// EMPTY
    bool empty()
    {
        if(head==NULL) return true;
        else return false;
    }
//  SIZE
    int size()
    {
        return count;
    }
//  TOP
    int Top()
    {
        if(top==NULL)
        {
            cout << "Stack Underflow | There is no Element in Top. "<<endl;
            return -1;
        }
    else return top->value;
    }


};

