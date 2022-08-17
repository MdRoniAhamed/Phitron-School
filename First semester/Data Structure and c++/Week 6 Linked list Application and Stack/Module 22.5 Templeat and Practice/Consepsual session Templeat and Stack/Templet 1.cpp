#include<bits/stdc++.h>
using namespace std;

template <typename T, typename M>
T sum(M a, M b)
{
    T s= a+b+80.25;
    return s;
}
int main()
{
    int a=10,b=20;
    double s = sum<double,int>(a,b);
    cout<<s<<endl;
    return 0;
}
