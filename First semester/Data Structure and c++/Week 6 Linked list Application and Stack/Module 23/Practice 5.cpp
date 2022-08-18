///Roni's Programming code
#include<bits/stdc++.h>
using namespace std;
#include"Class-2.h"

void Reverse_at_bottom(Stack<int>&RV,int value)
{
    if(RV.empty())
    {
        RV.push(value);
        return;
    }
    int top_value = RV.pop();

    Reverse_at_bottom(RV,value);
    RV.push(top_value);

}

void reverse_Stack(Stack<int>&RV)
{
    if(RV.empty())
    {
        return;
    }
    int top_Element = RV.pop();
    reverse_Stack(RV);

    Reverse_at_bottom(RV,top_Element);
}

int main()
{
    Stack<int> Roni;
    int size;
    cin>>size;
    for(int i=0; i<size; i++)
    {
        int value;
        cin>>value;
        Roni.push(value);
    }
    reverse_Stack(Roni);
    while(!Roni.empty())
    {
        cout<<Roni.pop()<<endl;
    }

    return 0;
}
