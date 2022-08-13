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
    cout<<"Position of the Delete: ";
    cin>>pos;
//    cout<<"Value of the Delete: ";
//    cin>>value;
    if(pos < 0 || size-1<pos)
    {
        cout<<"Invalid Index"<<endl;
    }
    else
    {
        if(pos==size-1) size--;///last position .
        else{
                /// Start or Mid and any position.
            for(int i=pos+1;i<size;i++)
            {
                array[i-1]=array[i];
            }
            size--;
        }
        PrintArray(array,size);
    }

    return 0;
}


