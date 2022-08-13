#include<bits/stdc++.h>
using namespace std;
int duplicat_remove(int size,int array[])
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(array[i] == array[j])
            {
                array[j] = 0;
            }
        }
    }
}
void Print_array(int size,int array[])
{
    for(int i=0; i<size; i++)
    {
        if(array[i]>0)
        {
            cout<<array[i]<<" ";
        }
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
    duplicat_remove(size,array);
    Print_array(size,array);

    return 0;
}
