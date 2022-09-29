#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if(t!=1)
    {

    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t ; j++)
        {

            if(j >=t-i) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int j=0; j<2; j++)
    {
        for(int i=0; i<t*2; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=0; i<t-1; i++)
    {
        for(int j=t; j>0 ; j--)
        {
            if(j<t-i) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    }

    return 0;
}


