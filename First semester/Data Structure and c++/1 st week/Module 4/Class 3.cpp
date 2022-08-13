#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,i,j;
    cin>>row>>col;  ///Input row and column
    int ar[row][col];  ///create 2D array
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>ar[i][j]; ///Input 2D array
        }
    }

    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum+=ar[i][j];  ///sum of array diagonal matrices
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}
