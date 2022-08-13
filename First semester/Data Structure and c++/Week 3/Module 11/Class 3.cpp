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

    for(int i=1; i<size; i++)
    {
        int flag = 0;
        cout<< "Iteration no : "<<i<<endl;
        for(int j=0; j<size-i; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array [j+1];
                array[j+1] = temp;
                flag = 1;
            }
             print_array(array,size);
        }
        cout<<endl;
        if(flag == 0) break;
    }
    //array sorting.
    cout<<"After sort: " ;
    print_array(array,size);
    cout<<endl;
}
