#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    cin>>a>>b>>c;
    d=a+b;
    sort(c.begin(),c.end())
    sort(d.begin(),d.end());
    if(d==c)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}

