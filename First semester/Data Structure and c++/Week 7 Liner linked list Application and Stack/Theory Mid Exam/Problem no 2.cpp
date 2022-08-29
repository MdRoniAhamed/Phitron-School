#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int max=0;

    int array[size];
    for(int  i=0; i<size; i++)
    {
        cin>>array[i];
        if(array[i]>max)
            max = array[i];
    }

    int frq[max+1] = {0};
    for(int i=0; i<size; i++)
    {
        frq[array[i]]++;
    }

    for(int i=1; i<=max; i++)
    {
        frq[i]+= frq[i-1];
    }
    int arr[size] = {0};
    for(int i=size-1;  i>=0; i--)
    {
        cout<<size-i<<"st Step: " ;
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<"-> ";
        frq[array[i]]--;
        int n = frq[array[i]];
        arr[n] = array[i];
        for(int i=0; i<size; i++)
        {
            cout<<arr[i]<<" " ;
        }
        cout<<endl;
    }

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" " ;
    }
    cout<<endl;

    return 0;
}

