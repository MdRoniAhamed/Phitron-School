#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    char op;
    cin>>a>>op>>b;
    int sum=0;
    if(op=='+')
    {
        sum=a+b;
        cout<<sum<<endl;
    }
    else{
        sum = a-b;
        cout<<sum<<endl;
    }
}
