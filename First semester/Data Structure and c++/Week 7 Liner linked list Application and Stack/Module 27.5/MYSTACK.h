//#include<bits/stdc++.h>
//using namespace std;
//  #include"RONI_STACK.h"

///Push()
///POP()
///empty()
///size()
///top()
///mid()

template <typename N> class Node
{
public:
    N value;
    Node * Next;
    Node * Prev;
    Node(N value)
    {
        this->value = value;
        Next = NULL;
        Prev = NULL;
    }
};

template <typename ST> class Stack
{
    Node<ST> * head;
    Node<ST> * Tail;
    int count = 0;
public:
    Stack()
    {
        head = NULL;
        Tail = NULL;
    }
    void Push(ST value)
    {
        Node<ST> * nw = new Node<ST>(value);
        if(head==NULL)
        {
            head = Tail = nw;
            count++;
            return;
        }
        count++;
        Tail->Next = nw;
        nw->Prev = Tail;
        Tail = nw;
    }
    ST POP()
    {
        ST check;
        if(head==NULL)
        {
            cout<<"Stack underflow . Stack not value found."<<endl;
            return check;
        }
        check = Tail->value;
        if(head==Tail)
        {
            head = Tail = NULL;
            count--;
            return check;
        }
        count--;
        Tail = Tail->Prev;
        Tail->Next = NULL;
        return check;
    }
    bool empty()
    {
        if(head==NULL) return true;
        else return false;
    }

    int size()
    {
        return count;
    }

    ST Top()
    {
        ST check;
        if(head==NULL)
        {
            cout<<"Stack underflow"<<endl;
            return check;
        }
        check = Tail->value;
        return check;

    }
    ST mid()
    {
        int Mid = count/2;
        Node<ST>* temp = Tail;
        for(int i=0; i<Mid; i++)
        {
            temp = temp->Prev;
        }
        ST check;
        check = temp->value;
        return check;
    }
};

