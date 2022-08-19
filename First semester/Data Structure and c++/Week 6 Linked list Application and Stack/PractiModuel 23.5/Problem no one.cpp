///MD RONI AHAMED.

#include<bits/stdc++.h>
using namespace std;
#include"Stack.h"
using namespace std;

void Reverse_value(Stack<int> &St,int value)
{
    if(St.empty())
    {
        St.push(value);
        return ;
    }
    int top_value = St.pop();

    Reverse_value(St,value);
    St.push(top_value);
}

void Reverse_Stack(Stack<int> &St,int count,int position)
{
    if(St.empty())
    {
        return ;
    }
    int top_element = St.pop();

    Reverse_Stack(St,++count,position);

    ///2nd way.
    if(position%2!=0)
    {
         int value = (position/2) + 1;
    if(value!=count) Reverse_value(St,top_element);
    }
    else{
       int  value = (position/2);
    if(value!=count) Reverse_value(St,top_element);
    }

}

int main()
{
    Stack<int> St;
    int size;
    cin>>size;
    int posi = (size/2)+1;
    for(int i=1; i<=size; i++)
    {
        int value;
        cin>>value;
        ///1 st way
//        if(i!=posi)
//        {
        St.push(value);
//        }
    }

    Reverse_Stack(St,0,size);

    while(!St.empty())
    {
        cout<<St.pop()<<" ";
    }
    cout<<endl;

    return 0;
}
