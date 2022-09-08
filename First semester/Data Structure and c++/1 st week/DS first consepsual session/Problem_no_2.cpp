#include<bits/stdc++.h>
using namespace std;

void codeMach()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]-arr[i]>1)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        codeMach();
    }
}