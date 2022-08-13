#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node*Next;
    Node(int value)
    {
        this->value=value;
        Next=NULL;
    }
};
void Display_Linked(Node * head)
{
    Node * Temp = head;
    while(Temp!=NULL)
    {
        cout<<Temp->value<<" ";
        Temp=Temp->Next;
    }
    cout<<endl;

}

void Add_Linked_Tail(Node* &head,int value)
{
    Node * newNode= new Node(value);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node * temp = head;
    while(temp->Next!=NULL)
    {
        temp= temp->Next;
    }
    temp->Next=newNode;
}

void Add_Linked_Head(Node* &head,int value)
{
    Node* newNode = new Node(value);

    newNode->Next = head;
    head = newNode;
}
int main()
{
    Node * head = NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        Add_Linked_Head(head,value);
    }
    Display_Linked(head);

}
