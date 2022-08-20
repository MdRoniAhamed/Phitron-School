#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;     ///Input size.
    int array[n][n];    ///Create array.
    int mid = (n/2) ;   ///Find mid.
    int sum = 0;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            cin>>array[j][i];  ///Input array value.
            if( mid==i) sum+=array[j][i];  ///array value sum.
            if(mid==j&&i!=mid) sum+=array[j][i];    ///array value sum.
            if(j==0&&i<mid) sum+=array[j][i];       ///array value sum.
            if(i==n-1&&j<mid) sum+=array[j][i];     ///array value sum.
            if(j==n-1&&i>mid) sum+=array[j][i];     ///array value sum.
            if(i==0&&j>mid) sum+=array[j][i];     ///array value sum.
        }
    }
    cout<<sum<<endl;   ///Output Sum value.

    return 0;
}










