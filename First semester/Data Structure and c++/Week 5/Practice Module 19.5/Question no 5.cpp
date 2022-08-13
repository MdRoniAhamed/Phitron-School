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
void reverse_position(Linear * head, int position);


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

void reverse_position(Linear * head,int position,int n)
{
    if(n==position) return ;
    reverse_position(head->Roni,++position,n);
    cout<<head->value<<" ";

}

int main()
{
    Linear * head = NULL;
    int n,m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int value;
        cin>>value;
        add_value(head,value);
    }
    for(int i=0; i<m; i++)
    {
        int position;
        cin>>position;
        reverse_position(head,0,position);
    }
//    Display(head);

    return 0;
}
