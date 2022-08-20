#include<bits/stdc++.h>
using namespace std;
template <typename N> class Node
{
public:
    N value;
    Node * next;
    Node *prev;
    Node(N value)
    {
        this->value = value;
        next = NULL;
        prev = NULL;
    }
};

template <typename S> class Stack
{
    Node<S> * head;
    Node<S> * Top;
    int count = 0;
public:
    Stack()
    {
        head = NULL;
        Top = NULL;
    }
    void push(S value)
    {
        cout<<value<<endl;
        Node<S> * nw = new Node<S>(value);
        if(head==NULL)
        {
            head = Top = nw;
            count++;
            return;
        }
        Top->next = nw;
        nw->prev = Top;
        Top = nw;
        count++;
    }
    S pop()
    {
        S check ;
        if(head==NULL)
        {
            cout<<"Underflow Stack"<<endl;
            return check;
        }
        check = Top->value;

        if(head==Top)
        {
            head = Top =NULL;
        }
        else
        {
            Top = Top->prev;
            Top->next = NULL;
        }
        count--;
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
    S top()
    {
        S chak ;
        if(head==NULL)
        {
            cout<<"Underflow Stack"<<endl;
            return chak;
        }
        chak = Top->value;
        return chak;

    }
};

int main()
{
    Stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;

    return 0;
}
