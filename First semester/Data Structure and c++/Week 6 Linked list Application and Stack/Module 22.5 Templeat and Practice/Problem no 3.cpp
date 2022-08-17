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

void Roted(Node* & head,int position)
{
    if(head==NULL)
    {
        cout<<"Value Not Found"<<endl;
        return ;
    }

    Node * last = head;
    while(last->next!=NULL)
    {
        last = last->next;
    }
    for(int i=0; i<position; i++)
    {
       Node * temp = head;
        head = head->next;
        last->next = temp;
        last = last->next;
        last->next = NULL;
    }

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

    int position;
    cin>>position;
    Roted(head,position);
    display(head);

    return 0;
}

