#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col; ///Input array of row and column
    int ar[row][col];   ///create  2D array
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>ar[i][j];   ///input array value.
        }
    }
    int req_col;
    cin>>req_col;  ///Input column.
    req_col--;
    for(int i=0;i<col;i++)
    {
        cout<<ar[req_col][i]<<" ";  ///Print column value.
    }
    return 0;
}
