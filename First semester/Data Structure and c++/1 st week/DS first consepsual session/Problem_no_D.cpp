#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
        cin>>a;
    int sum =a,m = a;
    for(int i=0; i<2; i++)
    {
        int a;
        cin>>a;
        if(sum<a)
        sum = a;
        if(m>a)
        m=a;
    }
    cout<<sum-m<<endl;
}