#include<bits/stdc++.h>
using namespace std;
void PrintArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i] << " ";
    }
    cout<<endl;
}

int main()
{
    int array [50];
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    cout<<"Given array" <<endl;
    PrintArray(array,size);

    int pos,value;
    cout<<"Position of the Insertion: ";
    cin>>pos;
    cout<<"Value of the Insertion: ";
    cin>>value;
    if(pos < 0 || 1+size<pos)
    {
        cout<<"Invalid Index"<<endl;
    }
    else
    {

        ///sorting way.
        // size -1 ---> pos
        for(int i=size-1; i>=pos; i--)
        {
            array[i+1] = array[i];
        }
        array[pos] = value;

        cout<<"Array after the Insertion Sorting Way: "<<endl;
        PrintArray(array,size+1);
        ///Swap way.
        array[size] = array[pos];
        array[pos] = value;
        cout<<"Array after the Insertion Swap way : "<<endl;
        PrintArray(array,size+1);
    }

    return 0;
}

