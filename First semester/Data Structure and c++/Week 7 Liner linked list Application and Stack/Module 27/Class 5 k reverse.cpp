#include<bits/stdc++.h>
using namespace std;
#include"MYSTACK.h"
#include"MYQUEUE.h"

/*
11 3
1 2 3 4 5 6 7 8 9 10 11
---> 3 2 1 6 5 4 9 8 7 11 10
*/

void Reverse_k_Element(int n, int k, Queue<int>&q )
{
    int x = n/k;
    int y = n%k;
    Stack<int> st;
    while(x>0)
    {
        int check = k;
        while(check>0)
        {
            st.Push(q.pop());
            check--;
        }
        while(!st.empty())
        {
            q.push(st.POP());
        }
        x--;
    }

    while(y>0)
    {
        st.Push(q.pop());
        y--;
    }
    while(!st.empty())
    {
        q.push(st.POP());
    }

}

int main()
{
    int n,k;
    cin>>n>>k;
    Queue<int> q;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }

    Reverse_k_Element(n,k,q);

    while(!q.empty())
    {
        cout<<q.pop()<<" " ;
    }
    cout<<endl;

    return 0;
}
