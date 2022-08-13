#include<bits/stdc++.h>
using namespace std;
class Node
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
void insertTail(Node* &head, int value)
{
    Node* newnode = new Node(value);
    if(head==NULL)
    {
        head = newnode;
        return ;
    }
    Node * temp = head;
    while(temp->Next!=NULL)
    {
        temp = temp->Next;
    }
    temp->Next=newnode;
}
void display(Node * n)
{
    while(n!=NULL)
    {
        cout<<n->value<<" ";
        n=n->Next;
    }
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    int n;
    cout<<"Please enter the number: ";
    cin>>n;
    cout<<"Please enter the "<<n<<"th value: "<<endl;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        insertTail(head,value);
    }
    display(head);

    return 0;
}
