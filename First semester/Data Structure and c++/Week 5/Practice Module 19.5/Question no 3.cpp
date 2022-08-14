#include<bits/stdc++.h>
using namespace std;
class Linear
{
public:
    int value;
    Linear * Roni;
    Linear(int value)
    {
        this->value = value;
        Roni = NULL;
    }
};

void add_value(Linear * & head,int value);
void Display(Linear * head);


void add_value(Linear * head,int value)
{
    Linear * newLinear = new Linear(value);
    if(value==-1)
    {
        head = NULL;
        return;
    }
    if(head==NULL)
    {
        head = newLinear;
        return ;
    }
    Linear * temp = head;

    while(temp->Roni!=NULL)
    {
        temp = temp->Roni;
    }
    temp->Roni = newLinear;
}

void Display(Linear* head)
{
    while(head!=NULL)
    {
        cout<<head->value;
        head = head->Roni;
        if(head!=0)
        {
            cout<<"->";
        }
    }
    head = NULL;
    cout<<endl;
}

int main()
{
    Linear  head = NULL;
    int n,m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        add_value(&head,value);
    }
    add_value(&head,-1);
    Display(&head);
    Display(&head);
    return 0;
}

