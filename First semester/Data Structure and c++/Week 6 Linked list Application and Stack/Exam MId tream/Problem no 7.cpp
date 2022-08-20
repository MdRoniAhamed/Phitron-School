#include<bits/stdc++.h>
using namespace std;

class Node  ///Create Linked list Class.
{
public:
    int value;
    Node * Next;
    Node(int value)
    {
        this->value = value;
        Next = NULL;
    }
};

void Add_linked_list(Node*&head,int value)   ///Linked list Input value.
{
    Node * NW = new Node(value);
    if(head==NULL)
    {
        head = NW;
        return ;
    }
    Node * temp = head;
    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = NW;
}

void Display(Node * head)    ///Display link list.
{
    if(head==NULL)
    {
        cout<<"Value Not Found in the linked list."<<endl;
        return ;
    }
    while(head!=NULL)
    {
        cout<<head->value;
        head = head->Next;
        if(head!=NULL)
        {
            cout<<"->";
        }
    }
}

Node* Reverse(Node* &head)
{
    Node * prev = NULL;
    Node * current = head;
    if(head==NULL)
    {
        return head;
    }
    Node * next = head->Next;
    while(true)
    {
        current->Next = prev;
        prev = current;
        current = next;
        if(current==NULL) break;
        next = next->Next;
    }
    return prev;
}

Node* reverseKNodes(Node*&head,int k)  ///Reverse the kth elements .
{
    if(head==NULL)
    {
        return head;
    }
    for(int i=0; i<k; i++)
    {
        Node * temp = head;
        Node * nw = head;
        head = head->Next;
        while(temp->Next!=NULL)
        {
            temp = temp->Next;
        }
        temp->Next = nw;
        nw->Next  = NULL;
    }
    return Reverse(head);  ///Return value.
}

int main()
{
    Node * head = NULL;
    int size;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        int value;
        cin>>value;
        Add_linked_list(head,value);  ///Call Add Linked list.
    }
    int K;
    cin>>K;
    head = reverseKNodes(head,K);  ///Called by exam condition kth element reverse.
    Display(head);  /// call show Display value.

    return 0;
}

