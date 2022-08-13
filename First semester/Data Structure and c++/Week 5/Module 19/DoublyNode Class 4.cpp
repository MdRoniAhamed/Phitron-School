#include<bits/stdc++.h>
using namespace std;

class doublyNode
{
public:
    int value;
    doublyNode * prev;
    doublyNode * next;
    doublyNode(int value)
    {
        this->value = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtTail(doublyNode * &head, int value);
void insertAtHead(doublyNode * &head, int value);\
void display(doublyNode * n);
int countLength(doublyNode * head);


void insertAtTail(doublyNode * &head, int value)
{
    doublyNode* newNode = new doublyNode(value);
    if(head==NULL)
    {
        head = newNode;
        return ;
    }

    doublyNode * temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtHead(doublyNode * &head, int value)
{
    /// s1: newNode creation
    doublyNode * newNode = new  doublyNode(value);

    /// st2: Update of head prev
    head->prev= newNode;

    /// st3: Update of newNode->next

    newNode->next = head;

    /// st4: Update of head
    head = newNode;
}

void display(doublyNode * n)
{
    while(n!=NULL)
    {
        cout<<n->value;
        n = n->next;
        if(n!=NULL)
        {
            cout<<"--->";
        }
    }
    cout<<endl<<endl;
}

void Reversedisplay(doublyNode *& head)
{
    doublyNode * temp = head;
    while (temp->next!=NULL)
        {
            temp = temp->next;
        }

    while(temp!=NULL)
    {
        cout<<temp->value;
        temp = temp->prev;
        if(temp!=NULL)
        {
            cout<<"--->";
        }
    }
    cout<<endl<<endl;
}

int countLength(doublyNode * head)
{
    int count = 0;
    doublyNode * temp = head;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    doublyNode * head = NULL;
    int value,position;
    ///Choice 1: Insertion at Head
    ///Choice 2: Insertion at Tail
    cout<<"Choice 1: Insertion at Head"<<endl
    <<"Choice 2: Insertion at Tail"<<endl
    <<"Choice 3: DoublyLinked list Di"<<endl
    <<"Choice 4: Reverse DoublyLinked list Di"<<endl
    <<"Choice 0: Exit"<<endl<<endl;
    cout<<"Next Choice: ";
    int choice;
    cin>>choice;
    while(choice!=0)
    {
        switch(choice)
        {
        case 1:
            cout<<"Enter the value: ";
            cin>>value;
            insertAtHead(head,value);
            break;
        case 2:
            cout<<"Enter the Value: ";
            cin >> value;
            insertAtTail(head,value);
            break;
        case 3:
            cout<<endl<<"Display Doubly Linked list: ";
            display(head);
            break;
        case 4:
            cout<<endl<<"Reverse Display Doubly Linked list: ";
            Reversedisplay(head);
            break;
        default:
            break;
        }
        cout<<"Next Choice: ";
        cin>>choice;
    }

    cout<<endl<<"Doubly Linked List: ";
    display(head);
    cout<<endl<<"Length of the Doubly linked List: "<<countLength(head)<<endl;

    return 0;

}
