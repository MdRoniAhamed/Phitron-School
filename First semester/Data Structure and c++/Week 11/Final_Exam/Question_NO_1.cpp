#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        int sum=0;
        for(int j=0; j<a ; j++)
        {
            int c;
            cin>>c;
            sum+=c;
        }
        if(2*sum <=b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}