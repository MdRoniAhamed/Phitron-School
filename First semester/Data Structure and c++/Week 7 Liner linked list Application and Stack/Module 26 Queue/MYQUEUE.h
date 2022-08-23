#include<bits/stdc++.h>
using namespace std;
template <typename N> class Node
{
public:
    N value;
    Node * Next;
    Node(N value)
    {
        this->value = value;
        Next = NULL;
    }
};

template <typename Q> class Queue
{
    Node<Q> * front;
    Node<Q> * rear;
public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    /// enqueue ===> push(value)
    void push(Q value)
    {
        Node<Q> * newNode = new Node<Q>(value);
        if(front == NULL)
        {
            rear = front = newNode;
            return;
        }
        rear->Next = newNode;
        rear = rear->Next;
    }
    ///dequeue ===> POP()
    Q pop()
    {
        Q check;
        if(front == NULL)
        {
            cout<<"Queue Underflow. There is no element in the Queue."<<endl;
            return check;
        }
        Node<Q>* delNode ;
        delNode = front;
        front = front->Next;
        check = delNode->value;
        if(front == NULL)
        {
            rear = NULL;
        }
        delete delNode;
        return check;
    }
    ///peek ===>front() back()
    Q Front()
    {
        Q check;
        check = front->value;
        return check;
    }
    Q Back()
    {
        Q check;
        check = rear->value;
        return check;
    }
    ///empty ===>empty();
    bool empty()
    {
        if(front == NULL && rear == NULL)
            return true;
        else return false;
    }
};

