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
struct Test
{
    int position[1000];
};

void Display_Linked(Node * head);
void Add_Linked_Tail(Node* &head,int value);
void Add_Linked_Head(Node* &head,int value);
int countLength(Node *& head);
void insertAtSpecificPosition(Node*&head,int position,int value);
int searchByValueUnique(Node*&head,int value);
void searchByValueDuplicate(Node*&head,int value);

int searchByValueUnique(Node*&head,int value)
{
    int count= 1 ;
    Node * temp = head;
    if(temp==NULL)
    {
        return -1;
    }
    while(temp->value!=value)
    {
        if(temp->Next==NULL)
        {
            return -1;
        }
        temp=temp->Next;
        count++;
    }

    return count;
}

void searchByValueDuplicate(Node*&head,int value)
{
    Node * temp = head;
    int size = countLength(head);
    int position[size+1]= {0},k=1;
    int count=1;
    bool flog=true;
    while(temp!=NULL)
    {
        if(temp->value==value)
        {
            //cout<<count<< " ";
            position[k]=count;
            k++;
            flog=false;
        }
        temp= temp->Next;
        count++;

    }

    if(flog) cout<<"The Search value is not yet in the list.";
    else
    {
        cout<<"The value is Found at Position: ";
        position[0]=k;
        for(int i=1; i<position[0]; i++)
        {
            cout<<position[i];
            if(position[0]-1>i) cout<<", " ;
        }
    }
}

Test searchByValueDuplicateReturn(Node*&head,int value)
{
    Test T;
    Node * temp = head;
    int k=1;
    int count=1;
    while(temp!=NULL)
    {
        if(temp->value==value)
        {
            //cout<<count<< " ";
            T.position[k]=count;
            k++;
        }
        temp= temp->Next;
        count++;
    }
    T.position[0]=k ;
    return T;
}
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
int countLength(Node *& head)
{
    int count=0;
    Node * temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
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
            cout<<"Enter the value the search: ";
            cin>>value;
            position = searchByValueUnique(head,value);
            if(position!=-1)
            {
                cout<<"The number is at Position "<<position<<endl;
            }
            else
            {
                cout<<"The number is not yet in the list" <<endl;
            }
        case 5:
            cout<<"Enter the value the search: ";
            cin>>value;
//            searchByValueDuplicate(head,value);
            Test T;
            T = searchByValueDuplicateReturn(head,value);
            if(T.position[0]==1)
            {
                cout<<"The Search value is not yet in the list."<<endl;
            }
            else
            {
                int size= T.position[0];
                cout<<"The value is Found at Position: ";

                for(int i=1; i<size; i++)
                {
                    cout<<T.position[i];
                    if(T.position[0]-1>i) cout<<", " ;
                }
                cout<<endl;

            }
        default:
            break;
        }
        cout<<"Next Choice: " ;
        cin>>n;
    }
    cout<<endl<<"Linked list: ";
    Display_Linked(head);
    cout<<"Length of Linked list: "<<countLength(head)<<endl;
    return 0;
}
