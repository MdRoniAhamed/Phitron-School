/// Counting array sort:
#include<bits/stdc++.h>
using namespace std;
void Print_array(int size, int array[])
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<< " ";
    }
    cout<<endl;
}
int main()
{
    int size;
    cin>>size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    cout<<"Before Sort: " ;
    Print_array(size,array);
    //Step 1: Finding max.
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
    }

    ///Step 2 : Initialization.
    int count[max+1];

    for(int i=0; i<=max; i++)
    {
        count[i] = 0;
    }
3
    ///step 3 : Frequency calculation .
    for(int i=0; i<size; i++)
    {
        count[array[i]]++;
    }

    ///Step 4 : cumulative Sum
    for(int i=1; i<=max; i++)
    {
        count[i]+= count[i-1];
    }

    /// Step 5 : Final Array ---> Backward Traversal of BAsic Array.
    int final[size];
    for(int i=size-1; i>=0; i--)
    {
        count[array[i]]--;
        int k = count[array[i]];
        final[k] = array[i];
    }
    cout<<" After Sort: " ;
    Print_array(size,final);
    return 0;
}
