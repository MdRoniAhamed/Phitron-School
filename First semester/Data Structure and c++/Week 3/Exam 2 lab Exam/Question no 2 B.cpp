#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int size,q;
        cin>>size>>q;
        int array[size];
        int arr[size]= {0};
        for(int j=0; j<size; j++)
        {
            cin>>array[j];
            if(j==0)
            {
                arr[j]=array[j];
            }
            else
            {
                arr[j] = arr[j-1] + array[j];
            }

        }
        cout<<"Case "<<i<<":"<<endl;
        for(int tc=0; tc<q; tc++)
        {
            int a,b;
            cin>>a>>b;
            a--,b--;
            int count=0;
            if(a==0)
            {
                count = arr[0];
            }
            else
            {
                count = arr[a] - arr[a-1];
            }
            for(int j=a+1; j<=b; j++)
            {
                int val = arr[j] - arr[j-1];
                if(count>val)
                {
                    count = val;
                }
            }
            cout<<count<<endl;

    }

    return 0;
}
