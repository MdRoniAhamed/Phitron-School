#include<bits/stdc++.h>
using namespace std;

void print_array(int size,int array[])
{
    for(int i=0;i<size;i++)
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
        if(array[i]%3==0)
        {
            array[i] = -1;
        }
    }
    print_array(size,array);

    return 0;
}
