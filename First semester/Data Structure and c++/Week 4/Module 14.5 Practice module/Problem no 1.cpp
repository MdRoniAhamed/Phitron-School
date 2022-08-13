#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column=0;
    cin>>row;
    column = row;

    int array[row][row];
    int mid = row/2;
    int sum =0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<row; j++)
        {
            cin>>array[i][j];
            if(i==0&&j<mid)  sum += array[i][j];
            if(j==mid&&i<row&&i!=mid) sum += array[i][j];
            if(i==mid&&j<row) sum+= array[i][j];
            if(j==row-1&&i<mid) sum+=array[i][j];
            if(i>mid&&j==0&&i<row) sum += array[i][j];
            if( j>mid && i == row-1 && j < row) sum +=array[i][j];
        }
    }

    cout<<sum<<endl;

    return 0;
}
