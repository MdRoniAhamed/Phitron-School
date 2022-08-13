#include<bits/stdc++.h>

using namespace std;
int main()
{
    int row=4,col=4;
    int ar[row][col]; ///Create 2D array.
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>ar[i][j]; ///Input 2D array.
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<ar[i][j]<< " "; ///Output 2D array.
        }
        cout<<endl;
    }
    return 0;
}
