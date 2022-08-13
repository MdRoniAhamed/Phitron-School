#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n+1]={0};
    for(int i=1; i<=n; i++)
    {
        cin>>array[i];
        if(i!=1) array[i] += array[i-1];
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int l,r;
        cin>>l>>r;
        l--;
        cout<<array[r]-array[l]<<endl;
    }

    return 0;
}

