#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;     ///Input Row and Column .
    int array[row][col];   ///Create Matrix.
    int Max = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>array[i][j];  ///Input Matrix.
            if(Max<array[i][j]) Max = array[i][j];  ///Find MAX Matrix.
        }
    }
    int arr[Max+1] = {0};

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            arr[array[i][j]]++;   ///Find the duplicate value of Matrix.
            if(arr[array[i][j]]>1)
            {
                array[i][j] = -1;   ///Set the duplicate integers by -1 value.
            }
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<array[i][j]<<"  ";   ///Output the Matrix.
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
