#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    int Max=0;
    cin>>size;  /// Input array size.
    int array[size];  ///Create array.
    for(int i=0; i<size; i++)
    {
        cin>>array[i]; ///Input array value.
        if(Max<array[i])
        {
            Max = array[i];  ///Find array Max value.
        }
    }

    int frq[Max+1] = {0};  ///Create Frquency array.
    for(int i=0; i<size; i++)
    {
        frq[array[i]]++;  ///Find Unique value.
    }
    for(int i=0; i<=Max; i++)
    {
        if(frq[i]!=0)
        cout<<i<<" => "<<frq[i]<<endl;  ///Print Unique value.
    }
}
