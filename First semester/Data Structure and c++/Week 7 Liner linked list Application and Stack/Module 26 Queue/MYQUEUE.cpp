#include<bits/stdc++.h>
using namespace std;
#include"MYQUEUE.h"

typedef pair<char, int> mytype;

int main()
{
    Queue<mytype> q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        char c1;
        int c2;
        cin>>c1>>c2;
        q.push(make_pair(c1,c2));
    }

    cout<<endl<<endl;

//    while(!q.empty())
//    {
//        mytype check;
//        check = q.pop();
//        cout<<check.first<<" "<<check.second<<endl;
//    }

    if(!q.empty())
    {
        mytype check;
        check = q.Front();
        cout<<check.first<<" "<<check.second<<endl;
    }

    if(!q.empty())
    {
        mytype check;
        check = q.Back();
        cout<<check.first<<" "<<check.second<<endl;
    }

    return 0;
}
