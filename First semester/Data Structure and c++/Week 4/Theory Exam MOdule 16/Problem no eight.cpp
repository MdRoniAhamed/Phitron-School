#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *Next;

    /// Constructer Creation
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};
void insert_At_Tail(Node*&head,int val)
{
    Node* newNode = new Node(val);
    if (head==NULL)
    {
        head = newNode;
        return ;
    }
    Node * temp = head;
    while(temp->Next!=NULL)
    {
        temp= temp->Next;
    }
    temp->Next=newNode;
}
void inser_At_Head(Node* &head,int value)
{
    Node * newNode = new Node(value);
    newNode->Next = head;
    head = newNode;
}
void display_linked_list(Node * n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        if(n->Next!=NULL)
        {
            cout<<" -> ";
        }
        n=n->Next;
    }
    cout<<endl;
}
void reversedListPrint(Node *head)
{
    if (head == NULL)
        return;
    reversedListPrint(head->Next);
    if (head->Next != NULL)
        cout << "-> ";
    cout << head->value << " ";
}

int main()
{
    Node * head = NULL;

    int n;
    int size=1;
    while(size==1||size==2)
    {
        cout<<"Add Head value => 1 , add Tail value => 2 , exit = 3"<<endl;
        cin>>size;

        if(size==1)
        {
            cout<<"add value"<<endl;
            cin>>n;
            inser_At_Head(head,n);
        }
        if(size==2)
        {
            cout<<"add value"<<endl;
            cin>>n;
            insert_At_Tail(head,n);
        }

    }


    display_linked_list(head);
    cout<<endl;
     reversedListPrint(head);
cout<<endl<<endl;


    return 0;
}

