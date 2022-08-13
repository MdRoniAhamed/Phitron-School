#include<bits/stdc++.h>
using namespace std;
void Print_array(int size,int array[])
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
    int count =0 ;
    for(int i=1; i<size; i++)
    {

        ///search array.
        for(int j=i-1; j>=0; j--)
        {
            if(array[i]==array[j])
            {
                ///index - array.
                for(int k = i; k<size-1; k++)
                {
                    array[k] = array[k+1];
                }
                i--;
                size--;
            }

        }
    }
    Print_array(size,array);

    return 0;
}

