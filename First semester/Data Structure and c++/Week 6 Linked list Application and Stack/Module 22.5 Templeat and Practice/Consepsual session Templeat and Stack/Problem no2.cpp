#include<bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T value;
    Node * next;
    Node * prev;
    Node(T value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

template <typename ST>
class Stack
{
    Node<ST> * head;
    Node<ST> * top;
public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    void Push(ST value)
    {
        Node<ST> * nw = new Node<ST>(value);
        if(head==NULL)
        {
            head = top = nw;
        }
        else
        {
            top->next = nw;
            nw->prev = top;
            top = nw;
        }

    }
    void pop()
    {
        if(head==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }
        if(head==top)
        {
            head=top=NULL;
            return;
        }
        top = top->prev;
        top->next = NULL;
    }
    ST Top()
    {
        if(head==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        return top->value;
    }
    bool empty()
    {
        if(head==NULL) return true;
        else return false;
    }

};

int main()
{
    Stack<char> * st = new Stack<char>();
    Stack<double> st2;
    st->Push('a');
    st->Push('b');
    st->Push('c');

    st2.Push(5.4);
    st2.Push(7.25);
    st2.pop();
//
//    if(st.empty()==true) cout<<"Empty stack"<<endl;
//    else cout<<"NOT Empty"<<endl;
    cout<<st->Top()<<endl;
    cout<<st2.Top()<<endl;

    return 0;
}


