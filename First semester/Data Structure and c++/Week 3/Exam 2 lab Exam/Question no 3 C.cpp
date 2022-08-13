#include<bits/stdc++.h>
using namespace std;
void Print_array(int size, int array[])
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        int n;
        cin>>n;
        int array[n];
        for(int j=0; j<n; j++)
        {
            cin>>array[j];
        }
        sort(array,array+n);
        int count=0;
        for(int e=0; e<n; e++)
        {
            if(array[0]!=array[e])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
