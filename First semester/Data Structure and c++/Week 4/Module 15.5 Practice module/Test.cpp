#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[n][n];
    int sum=0;
    int mid= n/2;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>array[i][j];
//            if(i==0&&j!=0&&j!=n-1) sum+=array[i][j];
//            else if(i==j) sum+=array[i][j];
            if(i!= mid &&i==n-1-j && i<n ){
                    sum += array[i][j];
                    cout<<array[i][n-1-i]<<endl<<j<<endl;

            }
//            else if(i==n-1&&j!=0&&j!=n-1) sum+=array[i][j];
        }
    }

    cout<<endl<<endl<<sum<<endl<<endl;

    return 0;
}

