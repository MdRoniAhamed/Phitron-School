#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    int arr[k];
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<k-1;i++)
    {
        for(int j=i+1;j<k;j++)
        {
            if(arr[j]>arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j] = temp;
            }
        }
    }
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<sum<<endl;
    return 0;

}
