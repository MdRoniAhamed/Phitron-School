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
class Test
{
public:
    int position[1000];
};
void Display_Linked(Node * head);
void Add_Linked_Tail(Node* &head,int value);
void Add_Linked_Head(Node* &head,int value);
int countLength(Node *& head);
void insertAtSpecificPosition(Node*&head,int position,int value);
void deletionAtHead(Node* &head);
void deletionAtTail(Node* &head);
void deletionAtSpecificPosition(Node*&head,int position);


void insertAtSpecificPosition(Node*&head,int position, int value)
{
    int i=0;
    Node*temp=head;
    while(i<position-2)
    {
        temp=temp->Next;
        i++;
    }
    Node * newNode = new Node(value);
    newNode->Next=temp->Next;
    temp->Next=newNode;
}

void Display_Linked(Node * head)
{
    Node * Temp = head;
    if(Temp!=NULL)
    {
        do
        {
            cout<<Temp->value<<" ";
            Temp=Temp->Next;
            if(Temp!=head) cout<<"-> ";

        }
        while(Temp!=head);
    }
    else
    {
        cout<<"NOT FOUND VALUE";
    }

    cout<<endl;

}

void Add_Linked_Tail(Node* &head,int value)
{
    Node * newNode= new Node(value);
    if(head==NULL)
    {
        head=newNode;
        newNode->Next = head;
        return;
    }
    Node * temp = head;
    while(temp->Next!=head)
    {
        temp= temp->Next;
    }
    newNode->Next = head;/// newNode->Next = temp->Next;
    temp->Next=newNode;
}

void Add_Linked_Head(Node* &head,int value)
{
    ///s1: newNode creation.
    Node* newNode = new Node(value);
    ///s2: Update of newNode->Next.
    newNode->Next = head;
    ///s3: Update the Tail with New head.
    if(head==NULL)
    {
        head=newNode;
        newNode->Next = head;
        return;
    }

    Node * temp = head;

    while(temp->Next!=head)
    {
        temp= temp->Next;
    }
    temp->Next = newNode;
    ///s4: Update of head.
    head = newNode;
}

int countLength(Node *& head)
{
    int count=0;
    Node * temp = head;
    do
    {
        count++;
        temp = temp->Next;
    }
    while(temp!=head);

        return count;
}

void deletionAtHead(Node* &head)
{
    Node * temp = head;
    if(temp!=NULL)
    {
        Node * delNode = temp;
        while(temp->Next!=head){
            temp = temp->Next;
        }
        temp->Next = delNode->Next;
        head = delNode->Next;
        delete delNode;
    }
    else
    {
        cout<<"There is no value in the Linked list. "<<endl;
    }

}

void deletionAtTail(Node* &head)
{
    Node * temp = head;
    if(temp!=NULL&&temp->Next!=head)
    {

        while(temp->Next->Next!=head)
        {
            temp = temp->Next;
        }
        Node * dellNode = temp->Next;
        temp->Next = dellNode->Next ;
        delete dellNode;
    }
    else if(temp==NULL)
    {
        cout<<"There is no value in the Linked list. "<<endl;
    }
    else
    {
        deletionAtHead(head);
    }
}

void deletionAtSpecificPosition(Node*&head,int position)
{
    Node * temp = head;
    int i=1;
    if(temp!=NULL&&countLength(head)>=position)
    {
        if(position==1)
        {
            deletionAtHead(head);
        }
        else
        {
            while(i<position-1)
            {
                temp = temp->Next;
                i++;
            }
            Node * delNode = temp->Next;
            temp->Next = delNode->Next;
            delete delNode;
        }
    }
    else
    {
        if(position>countLength(head))
        {
            cout<<"Position out of Bound. "<<endl;
        }
        else
            cout<<"There is no value in the Linked list. "<<endl;
    }
}


int main()
{
    Node * head = NULL;
    cout<<"Choice 1: Insertion at Head" <<endl
        <<"Choice 2: Insertion At Tail" <<endl
        <<"Choice 3: Insertion at Specific Position" <<endl
        <<"Choice 4: Deletion at head" <<endl
        <<"Choice 5: Display at Linked list" <<endl
        <<"Choice 6: Deletion at Tail" <<endl
        <<"Choice 7: Deletion at specific Position" <<endl
        <<"Choice 0: Exit" <<endl<<endl;
    int n=1,position=0;
    cout<<"Next Choice: " ;
    cin>>n;
    while(n!=0)
    {
        int value;
        switch(n)
        {
        case 1:
            cout<<"Enter the value: ";
            cin>>value;
            Add_Linked_Head(head,value);
            break;
        case 2:
            cout<<"Enter the value: ";
            cin>>value;
            Add_Linked_Tail(head,value);
            break;
        case 3:
            cout<<"Enter the Desired Position: ";
            cin>>position;
            cout<<"Enter the value: " ;
            cin>>value;
            insertAtSpecificPosition(head,position,value);
            break;
        case 4:
            deletionAtHead(head);
            break;
        case 5:
            Display_Linked(head);
            break;
        case 6:
            deletionAtTail(head);
            break;
        case 7:
            if(head==NULL)
            {
                cout<<"There is No Value in the Linked List" <<endl;
                break;
            }
            cout<<"Enter the Desired Position: ";
            cin>>position;
            deletionAtSpecificPosition(head,position);
            break;
        default:
            break;
        }
        cout<<"Next Choice: " ;
        cin>>n;
    }
    cout<<endl<<"Linked list: ";
    cout<<"Length of Linked list: "<<countLength(head)<<endl;
    return 0;
}

