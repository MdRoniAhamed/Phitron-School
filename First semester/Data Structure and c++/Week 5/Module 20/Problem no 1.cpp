#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int array[n] = {0};
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort(array,array+n);
    cout<<array[m-1]<<endl<<array[n-m]<<endl;
}
