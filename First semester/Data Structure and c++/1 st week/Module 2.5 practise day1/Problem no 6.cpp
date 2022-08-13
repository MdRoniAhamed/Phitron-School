#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,K,X,Y;
    cin>>N>>K>>X>>Y;
    if(N<K)
    {
        N*=X;
        cout<<N<<endl;
    }
    else{
        int sum=0,value=N-K;
        K*=X;
        value*=Y;
        sum = K+value;
        cout<<sum<<endl;
    }
    return 0;
}
