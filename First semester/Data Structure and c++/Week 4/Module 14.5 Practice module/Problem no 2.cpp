#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size][size];
    int sum=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<"Major diagonal: ";
    for(int i=0; i<size; i++)
    {
        cout<<array[i][i]<<" ";
    }
    cout<<endl<< "Minor diagonal: ";
    for(int i=size-1; i>=0; i--)
    {
        cout<<array[size-i-1][i]<<" ";
    }
    cout<<endl;

}
