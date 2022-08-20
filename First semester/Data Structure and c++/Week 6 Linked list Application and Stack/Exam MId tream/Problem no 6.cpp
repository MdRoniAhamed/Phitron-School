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
void Add_to_linked_list(Node*&head,int value)
{
    if(value%2==0) value = -1; ///Find even Number and replace the number -1.
    Node * nw = new Node(value);
    if(head == NULL)
    {
        head = nw;
        return ;
    }
    Node * temp = head;
    while(temp->Next!=NULL)
    {
        temp = temp->Next;
    }
    temp->Next = nw;
}
void Display(Node*head)
{
    if(head==NULL)
    {
        cout<<"Value not found in the linked list." <<endl;
        return ;
    }
    while(head!=NULL)
    {
        cout<<head->value;  ///Output the value of Linked list.
        head = head->Next;
        if(head!=NULL) cout<<" -> " ;
    }
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    int size;
    cin>>size;
    int value;
    for(int i=0; i<size; i++)
    {
        cin>>value;
        Add_to_linked_list(head,value);  ///Call by Linked list add.

    }
    Display(head);  ///Display all value in the linked list.

    return 0;
}
