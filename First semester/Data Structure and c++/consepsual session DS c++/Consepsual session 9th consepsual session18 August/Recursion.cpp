#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n==1)
    {
        cout<<1<<endl;
          return ;
    }

    for(int i=1; i<=n; i++)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    print(n-1);
    for(int i=1; i<=n; i++)
    {
        cout<<n<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cin>>size;
    print(size);
}
