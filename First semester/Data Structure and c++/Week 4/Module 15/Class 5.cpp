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

void insertAtTail(Node*&head,int val)
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

void inserAtHead(Node* &head,int value)
{
    //st:1: newNode creation.
    Node * newNode = new Node(value);
    //st 2: Update of newNode->Next.
    newNode->Next = head;
    //st 3: Update of head.
    head = newNode;
}
void display(Node * n)
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

int main()
{
    Node * head = NULL;

    int n;
    cout<<"Choice 1: Insertion at Head"<<endl<<"Choice 2: Insertion at Tail"<<endl<< "Choice 3: Exit: \n"<<endl;
    int choice = 2 ;
    while(choice==2||choice==1)
    {
        cout<<"Enter the Value: ";
        cin>>n;
        if(choice==1) inserAtHead(head,n);
        else if(choice==2) insertAtTail(head,n);
        cout<<"Do you want to Continue: (1,2/3)";
        cin>>choice;
    }

    display(head);

    return 0;
}

