#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    int sum = 1;
    int n=1;
    int w=1;
    for(int i=2; i<=m; i++)
    {
        w = sum;
        sum *= 2;
        n = sum*w;
    }

    cout<<n<<endl;
}
