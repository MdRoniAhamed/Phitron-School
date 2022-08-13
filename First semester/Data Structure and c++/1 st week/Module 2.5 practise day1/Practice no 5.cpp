#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&b==c)
    {
        cout<< "No"<<endl;
        return 0;
    }
    int sum=0;
    if(sum<a)sum=a;
    if(sum<b)sum=b;
    if(sum<c)sum=c;

    int x=0;
    if(a<sum)x+=a;
    if(b<sum)x+=b;
    if(c<sum)x+=c;

    if(sum==x)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
