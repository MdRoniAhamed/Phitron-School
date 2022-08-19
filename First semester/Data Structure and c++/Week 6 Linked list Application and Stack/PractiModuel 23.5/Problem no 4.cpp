#include<bits/stdc++.h>
using namespace std;
#include"Stack.h"
using namespace std;

int main()
{
    Stack<int> St;
    int size;
    cin>>size;
    Reverse_Stack(St);

    while(!St.empty())
    {
        cout<<St.pop()<<" ";
    }
    cout<<endl;

    return 0;
}


