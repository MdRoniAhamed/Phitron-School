#include<bits/stdc++.h>
using namespace std;
#include"MYSTACK.h"

/*
7
1 6 43 1 2 0 5
10
6 5 5 5 4 7 1 2 1 2
*/

int main()
{
    int size;
    cin>>size;
    int array[size];
    Stack<int> st;
    Stack<int> minStack;
    int min = INT_MAX;

    for(int i=0; i<size; i++)
    {
        cin>>array[i];

        if(array[i]<=min)
        {
            minStack.Push(array[i]);
            min = array[i];
        }
        st.Push(array[i]);
    }
    while(!st.empty())
    {
        ///if TOP of minStack and st is not equal.
        if(minStack.Top()!=st.Top())
        {
            cout<<minStack.Top()<<" ";
            st.POP();
        }
        ///else.
        else
        {
            cout<<minStack.POP()<<" ";
            st.POP();
        }
    }
    cout<<endl<<endl;

}
