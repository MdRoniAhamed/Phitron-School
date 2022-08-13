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
int searchByValueUnique(Node*&head,int value);
void searchByValueDuplicate(Node*&head,int value);
void searchByValueUnique(Node *&head,int searchValue,int value);
void deletionAtHead(Node* &head);
void deletionAtTail(Node* &head);

Test searchByValueDuplicateReturn(Node*&head,int value)
{
    Node * temp = head;
    Test T;
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
    T.position[0]=k;
    return T;
}

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
    if(Temp!=NULL){
         while(Temp!=NULL)
    {
        cout<<Temp->value<<" ";
        if(Temp->Next!=NULL) cout<<"-> ";
        Temp=Temp->Next;

    }
    }
    else{
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

void searchByValueUnique(Node *&head,int searchValue,int value)
{
    ///St 1: Search the position of the searchValue
    int position = searchByValueUnique(head,searchValue);
    ///St 2: Insertion the value at the Position+1
    insertAtSpecificPosition(head,position+1,value);
}

void deletionAtHead(Node* &head)
{
    Node * temp = head;
    if(temp!=NULL)
    {
        head = temp->Next;
//        delete temp;
    }
    else
    {
        cout<<"There is no value in the Linked list. "<<endl;
    }

}

void deletionAtTail(Node* &head)
{
     Node * temp = head;
    if(temp!=NULL&&temp->Next!=NULL)
    {

               while(temp->Next->Next!=NULL)
        {
            temp = temp->Next;
        }
        Node * dellNode = temp->Next;
        temp->Next = NULL;
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

int main()
{
    Node * head = NULL;
    cout<<"Choice 1: Insertion at Head" <<endl
        <<"Choice 2: Insertion At Tail" <<endl
        <<"Choice 3: Insertion at Specific Position" <<endl
        <<"Choice 4: Search a value(Unique List)" <<endl
        <<"Choice 5: Search a value(Duplicate enabled List)" <<endl
        <<"Choice 6: Insertion after a specific value(Unique List)" <<endl
        <<"Choice 7: Deletion at head" <<endl
        <<"Choice 8: Display at Linked list" <<endl
        <<"Choice 9: Deletion at Tail" <<endl
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
            Test T;
            T = searchByValueDuplicateReturn(head,value);
            if(T.position[0]==1)
            {
                cout<<"The Search value is not yet in the list."<<endl;
            }
            else
            {
                int size=T.position[0];
                for(int i=1; i<size; i++)
                {
                    cout<<T.position[i]<<" ";
                }
                cout<<endl;
            }
            break;
        case 6:
            cout<<"Enter the value to Search: ";
            int searchValue;
            cin>>searchValue;
            cout<<"Enter the value to insert: ";
            cin>>value;
            searchByValueUnique(head,searchValue,value);
            break;
        case 7:
            deletionAtHead(head);
            break;
        case 8:
            Display_Linked(head);
            break;
        case 9:
            deletionAtTail(head);
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



