///MD RONI AHAMED

#include<bits/stdc++.h>
using namespace std;

template <typename S> class Node
{
public:
    S value;
    Node * Next;
    Node * prev;

    Node(S value)
    {
        this->value = value;
        Next = NULL;
        prev = NULL;
    }
};

template <typename N> class Stack
{
    int count=0;
    Node<N> * head;
    Node<N> * top;
public:
    Stack()
    {
        head = NULL;
        top = NULL;
    }
    void Push(N value)
    {
        Node<N> * NW = new Node<N>(value);
        if(head==NULL)
        {
            head = top = NW;
            count++;
            return ;
        }
        count++;
        top->Next = NW;
        NW->prev = top;
        top = NW;
    }

    N pop()
    {
        N check;
        if(head==NULL)
        {
            cout<<"Stack underflow. Value NOT Found."<<endl;
            return 0 ;
        }
        check = top->value;
        count--;
        if(top==head)
        {
            top=head=NULL;
            return check;
        }
        top = top->prev;
        top->Next = NULL;
        return check;
    }
    void sorted()
    {
        Node<N> * temp = top;
        Node<N> * Temp = top;
        while(temp->prev!=NULL)
        {
            temp = temp->prev;
            Temp = Temp->prev;
        }
        while(Temp->Next!=NULL)
        {
            while(temp->Next!=NULL)
            {
                if(temp->value > temp->Next->value)
                {
                    Node<N>* tem = temp->Next;
                    Node<N> *val = temp;
                    temp->Next = tem->Next;
                    temp->Next->prev = val->prev;
                    temp->prev = tem->Next;
                    temp->Next->Next = val;
                }
                temp = temp->Next;
            }
            Temp = Temp->Next;
        }

    }
    N Top()
    {
        if(head==NULL) return 0;
        else return top->value;
    }
    int size()
    {
        return size;
    }
    bool empty()
    {
        if(head==NULL) return true;
        else return false;
    }
};
int main()
{
    Stack<int> head;
    head.Push(1);
    head.Push(4);
    head.Push(3);
    head.Push(2);
    head.sorted();
//    while(!head.empty())
//    {
//        cout<<head.pop()<<endl;
//    }
    cout<<head.Top()<<endl;
}

