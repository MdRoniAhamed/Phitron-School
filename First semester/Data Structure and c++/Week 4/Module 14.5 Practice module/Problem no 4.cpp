#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,column;
    cin>>size>>column;
    int array[size][column];
    int sum=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>array[i][j];
        }
    }
    for(int i=0; i<size; i++)
    {
        for(int j=column-1, t=0; t<j ; t++,j--)
        {
            int value = array[i][t];
            array[i][t] = array[i][j];
            array[i][j] = value;
        }
    }
    for(int i=0; i<size; i++)
    {
        for(int e=0; e<column; e++)
        {
            cout<<array[i][e]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
