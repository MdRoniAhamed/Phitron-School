#include<bits/stdc++.h>
using namespace std;

Print_array(int array[],int size)
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

    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    /// Before array.
    cout<<"Before array sorting : ";
    Print_array(array,size);

    /// Insertion sort.
    for(int i=1; i<size; i++)
    {
        int key= array[i],j=i-1;
        cout<<" I "<<i<< " key : "<<key<<endl;

        while(j>=0&&array[j]>key)
        {
            array[j+1] = array[j];
            Print_array(array,size);
            j--;
        }

        array[j+1] = key;
        Print_array(array,size);
        cout<< endl;
    }
    cout<<endl;
    /// After array.
    cout<<"After array sorting : ";
    Print_array(array,size);
    return 0;
}
