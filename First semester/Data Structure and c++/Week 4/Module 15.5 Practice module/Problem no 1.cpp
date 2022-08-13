#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int value=0;
    for(int i=0; i<=n/2; i++)
    {
        if(i*i==n)
        {
            value=i;
            break;
        }
    }
    int array[value][value];
    for(int i=0; i<value; i++)
    {
        for(int j=0; j<value; j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0; i<value; i++)
    {
        for(int j=0; j<value; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
