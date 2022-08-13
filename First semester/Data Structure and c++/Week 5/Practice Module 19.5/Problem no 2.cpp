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

void add_value(Linear * & head,int value)
{
    Linear * newLinear = new Linear(value);
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

void Display(Linear * head)
{
    while(head!=0)
    {
        cout<<head->value;
        head = head->Roni;
        if(head!=0)
        {
            cout<<"->";
        }
    }
    cout<<endl;
}

int main()
{
    Linear * head = NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        if(value%2==0)
        {
            value = -1;
        }
        add_value(head,value);
    }
    Display(head);

    return 0;
}
