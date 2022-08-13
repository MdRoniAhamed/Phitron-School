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
    char choice = 'Y';
    while(choice=='Y')
    {
        cout<<"Enter the Value: ";
        cin>>n;
        insertAtTail(head,n);
        cout<<"Do you want to Continue: (Y/N)";
        cin>>choice;
    }

    display(head);

    return 0;
}
