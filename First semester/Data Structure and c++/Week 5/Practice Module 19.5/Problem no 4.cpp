#include<bits/stdc++.h>
using namespace std;
class Find
{
public:
    int value;
    Find * Next;
    Find * ago;
    Find ( int value)
    {
        this -> value = value;
        Next = NULL;
        ago = NULL;
    }
};

void add_value(Find * & head,int value)
{
    Find * newLinear = new Find(value);
    if(head==NULL)
    {
        head = newLinear;
        return ;
    }
    Find * temp = head;

    while(temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newLinear;
    newLinear->ago = temp;
}

void findMid(Find * head)
{
    if(head==NULL)
    {
        cout<<"Value NOT Found"<<endl;
        return;
    }
        Find * temp = head;
    while(temp->Next!=NULL)
    {
        temp= temp->Next;
    }

    while(head!=NULL||temp!=NULL)
    {
        if(temp==head)
        {
            cout<<"MID Index value: "<<head->value<<endl;
            return ;
        }
        temp = temp->ago;
        head= head->Next;
    }
    cout<<"It is Even Number mid not found.";
    cout<<endl;
}

void Display(Find * head)
{
    if(head==NULL)
    {
        cout<<"Value NOT Found"<<endl;
        return;
    }
    while(head->Next!=NULL)
    {
        cout<<head->value<<"-->";
        head= head->Next;
    }
    cout<<head->value<<endl;
    while(head!=NULL)
    {
        cout<<head->value;
        head= head->ago;
        if(head!=NULL)
        {
            cout<<"-->";
        }
    }
    cout<<endl;
}

int main()
{
    Find * head = NULL;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        add_value(head,value);
    }
    findMid(head);
    Display(head);

    return 0;
}

