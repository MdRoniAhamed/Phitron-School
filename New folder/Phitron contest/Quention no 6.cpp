#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int min=0;
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        int arr[m]={0};
        for(int j=0; j<m; j++)
        {
            cin>>arr[j];
        }
        min = arr[0];
        for(int j=1; j<m; j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
            }
        }
        cout<<min<<endl;
    }

    return 0;
}
