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
            cout<<" -> ";
        }
    }
}

void Delete_at_specific_value(Node*&head,int position)  ///Deletion specific position in the Linked list.
{
    if(head==NULL) return ;
    if(position==1)
    {
        head = head->Next;
        return;
    }
    int i = 0;
    Node * temp = head;
    while(position-2>i)
    {
        temp = temp->Next;
        i++;
    }
    temp->Next = temp->Next->Next;
}
void Delete_value(Node*&head,int size,int position,int Linked_size)  ///Deletion Exam condition value.
{
    if(head==NULL)
    {
        cout<<"Value NOT Found"<<endl;
        return ;
    }

    Node * temp = head;
    int index=1;        ///Index Create.
    int count = 0;      ///value count create.
    while(Linked_size>=count)
    {
        for(int i=0; i<size; i++)  ///Traverse M Exam condition.
        {
            index++;
            count++;
        }
        if(count>Linked_size) break;   ///Condition Break.
        for(int i=0; i<position; i++)  ///Delete N Exam condition.
        {
            Delete_at_specific_value(head,index);
            count++;                       /// Count ++.
            if(count>Linked_size)break;    ///Condition break;
        }
    }
}

int main()
{
    Node * head = NULL;
    int size,n,m;
    cin>>size>>n>>m;
    for(int i=0; i<size; i++)
    {
        int value;
        cin>>value;
        Add_linked_list(head,value);  ///Call Add Linked list.
    }
    Delete_value(head,n,m,size);  /// Call by Delete value .
    Display(head);  /// call show Display value.

    return 0;
}
