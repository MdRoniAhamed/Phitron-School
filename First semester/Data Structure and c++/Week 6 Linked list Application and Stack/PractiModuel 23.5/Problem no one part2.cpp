#include<bits/stdc++.h>
using namespace std;
#include"Stack.h"
using namespace std;

int main()
{
    Stack<int> St;
    int size;
    cin>>size;
    int posi = (size/2)+1;
    for(int i=0; i<size; i++)
    {
        int value;
        cin>>value;
        if(i!=posi)
        {
            St.push(value);
        }
    }

    Reverse_Stack(St);

    while(!St.empty())
    {
        cout<<St.pop()<<" ";
    }
    cout<<endl;

    return 0;
}


