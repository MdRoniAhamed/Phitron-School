#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int array[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>array[i][j];
            if(j%2!=0||i%2!=0)
            {
                sum +=array[i][j];
            }
        }
    }

    cout<<endl<<endl<<sum<<endl<<endl;
    return 0;
}
