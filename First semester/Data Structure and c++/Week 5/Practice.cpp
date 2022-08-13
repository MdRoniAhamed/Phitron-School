#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node * Next;
    Node(int value)
    {
        this->value=value;
        Next=NULL;
    }
};

void Linked_Display(Node * head)
{
    Node * temp = head;
    while(temp!=NULL)
    {
        cout<< temp->value <<" ";
        temp = temp->Next;
    }
    cout<<endl;
}

void add_Teil(Node*&head,int value)
{
    Node * temp = new Node(value);
    if(head==NULL)
    {
        head = temp;
        return ;
    }
    Node * newNode = head;
    while(newNode->Next!=NULL)
    {
        newNode = newNode->Next;
    }
    newNode->Next=temp;
}

void add_head(Node*&head,int value)
{
    Node * temp = new Node(value);
    temp->Next = head;
    head = temp ;
}

void add_specific_position(Node*&head,int value,int position)
{
    Node * newNode = new Node(value);
    Node * temp = head;
    int i=0;
    while(position-2>i)
    {
        temp = temp->Next;
        i++;

    }
    newNode->Next=temp->Next;
    temp->Next=newNode;
}
int main()
{
    Node * head = NULL;
    cout<<"Choice 1: Insertion at Head" <<endl
        <<"Choice 2: Insertion At Tail" <<endl
        <<"Choice 3: Insertion at Specific Position" <<endl
        <<"Choice 4: Search a value(Unique List)" <<endl
        <<"Choice 5: Search a value(Duplicate enabled List)" <<endl
        <<"Choice 0: Exit" <<endl<<endl;
    int n,position=0;
    int value;
    cout<<" Enter choice: ";
    cin>>n;
    while(n!=0)
    {
        switch(n)
        {
        case 0:

            break;
        case 1:
            cout<<"Enter the value: ";
            cin>>value;
               add_head(head,value);
            break;
        case 2:
            cout<<"Enter the value: ";
            cin>>value;
            add_Teil(head,value);
            break;
        case 3:
            cout<<"Enter the position : " ;
            cin>>position;
            cout<<"Enter the value: ";
            cin>>value;
               add_specific_position(head,value,position);
               break;
        default:
            break;

        }
        cout<<" Enter choice: ";
        cin>>n;
    }

Linked_Display(head);

}
