#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cou =0;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            int a = i*i + j;
            int b = i + j*j;
            if(a==n&&b==m)
            {
                cou++;
            }
        }
    }
    cout<<cou<<endl;
    return 0;
}

