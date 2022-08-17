#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node * next;
    Node(int value)
    {
        this->value = value;
        next = NULL;
    }
};

void Add(Node*&head,int value)
{
    Node * Nw = new Node(value);
    if(head==NULL)
    {
        head = Nw;
        return;
    }
    Node * temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = Nw;
}

void display(Node * head)
{
    if(head==NULL)
    {
        cout<<"Value Not Found"<<endl;
        return;
    }
    while(head!=NULL)
    {
        cout<<head->value;
        head = head->next;
        if(head!=NULL) cout<<" -> ";
    }
    cout<<endl;
}

void Duplicate_remove(Node *& head)
{
    if(head==NULL)
    {
        cout<<"Value Not Found"<<endl;
        return;
    }
    Node * temp = head;
    int val=temp->value;
//     temp = temp->next;
    while(temp->next!=NULL)
    {
        int n=0;
        if(val!=temp->next->value)
        {
            val = temp->value;
        }
        if(val==temp->next->value)
        {
            temp->next = temp->next->next;
            n++;
        }
        if(n==0) temp = temp->next;
    }
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
        Add(head,value);
    }
    Duplicate_remove(head);
    display(head);

    return 0;
}
