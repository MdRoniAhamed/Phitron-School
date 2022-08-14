#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,columns,sum=0;
    cin>>row>>columns;
    int array[row][columns];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<columns; j++)
        {
        int n,m;
            cin>>array[i][j];
            n = i+1;
            m = j+1;
            if(n%2==0 && m%2!=0) sum += array[i][j];
        }
    }
    cout<<sum<<endl;
    return 0;
}
