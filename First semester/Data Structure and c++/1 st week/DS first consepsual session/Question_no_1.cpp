#include<bits/stdc++.h>
using namespace std;

void codeMach()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a!=c && b!=d)
    {
        cout<<"1"<<endl;
    }
    else if((a==c && b!=d) || (a!=c&&b==d))
    {
        cout<<"2"<<endl;
    }
    else cout<<"3"<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        codeMach();
    }
}