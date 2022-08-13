#include<bits/stdc++.h>
using namespace std;

print_array(int array[],int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" " ;
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
    cout<<"Before sort: ";
    print_array(array,size);
    cout<<endl;

    /// Insertion sort.
    for(int i=1; i<size; i++)
    {
        int key = array[i];
        cout<<endl<<"i : "<< i<< "Key : "<<key<<endl;
        int j=i-1;
        while(array[j]>key&&j>=0)
        {
            array[j+1] = array[j];
            print_array(array,size);
            j--;
        }
        array[j+1] = key;
        print_array(array,size);
    }

    cout<<endl;

    cout<<"After sort: " ;
    print_array(array,size);
    cout<<endl;
}
