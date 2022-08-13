#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    int index_max = 0;
    int index_min = 0;
    int value_max = array[0];
    int value_min = array[0];
    for(int i=0;i<size;i++)
    {
        if(value_max<array[i])
        {
            value_max = array[i];
            index_max = i;
        }
        if(value_min>array[i])
        {
            value_min = array[i];
            index_min = i;
        }
    }
    cout<<"Max: "<<value_max<<",Index: "<<index_max<<endl;
    cout<<"Min: "<<value_min<<",Index: "<<index_min<<endl;

    return 0;
}

