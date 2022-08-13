#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size][size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i==j) array[i][j]=1;
            else array[i][j]=0;
        }
    }
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<array[i][j];
        }
    cout<<endl;
    }
    cout<<endl;

    return 0;
}

