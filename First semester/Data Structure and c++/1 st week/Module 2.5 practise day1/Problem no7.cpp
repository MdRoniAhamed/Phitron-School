#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int area=a*b;
    int area2=c*d;
    int big=max(area,area2);
    cout<<big<<endl;
    return 0;
}
