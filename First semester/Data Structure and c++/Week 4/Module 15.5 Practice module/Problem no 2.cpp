#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size=3;
    int array[size][size];
    int arr[size][size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cin>>arr[i][j];
        }
    }
        cout<<endl<<endl;

        int a[size][size];

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(j==0)  a[i][j]       = array[i][j]*arr[j][j]+array[i][j+1]*arr[j+1][j]+array[i][j+2]*arr[j+2][j];
                    // array[0][0] = array[0][0]*arr[0][0]+array[i][j+1]*arr[j+1][j+1]+array[i][j+2]*arr[j+2][j+2];
           else if(j==1) a[i][j] = array[i][j-1]*arr[j-1][j]+array[i][j]*arr[j][j]+array[i][j+1]*arr[j+1][j];
            else         a[i][j] = array[i][j-2]*arr[j-2][j]+array[i][j-1]*arr[j-1][j]+array[i][j]*arr[j][j];
                // cout<<a[i][j]<<endl;

        }
    }

    cout<<endl<<endl;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
