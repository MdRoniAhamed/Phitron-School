#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    for(int t=0;t<size; t++)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            int x = n/2;
            if(x%2==0)
            {
                int sum = 0;
                cout<<"YES"<<endl;
                for(int i=2; i<=n; i+=2)
                {
                    cout<<i<<" ";
                    sum += i;
                }
                for(int i=1; i<n-1; i+=2)
                {
                    cout<<i<<" ";
                    sum -= i;
                }
                cout<<sum<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}

