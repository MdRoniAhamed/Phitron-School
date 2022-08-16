#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node * Next ;
    Node * prev;
    Node(int value)
    {
        this->value = value;
        Next = NULL;
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
        top  = NULL;
    }
    //Push
    void push(int value)
    {
        Node * newNode = new Node(value);
        if(head==NULL)
        {
            head = top = newNode;
            count++;
            return;
        }
        top->Next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
    }
    //pop
    int POP()
    {
        Node * delNode;
        delNode = top;
        int check=0;

        if(head==NULL)
        {
            cout<<"Stack Underflow "<<endl;
            return check;
        }
        if(top==head)
        {
            head = top = NULL;
        }
        else
        {
            top = top->prev;
            top->Next = NULL;
        }
        check = delNode->value;
//        delete delNode;
        return check;
    }

    //top
    int Top()
    {
        if (top==NULL)
        {
            cout<<"Stack Underflow | There is no Element in Top."<<endl;
            return 0;
        }
        else return top->value;
    }

    // size
    int size()
    {
        return count;
    }

    //empty
    bool empty()
    {
        if(head==NULL) return true;
        else return false;
    }
};

