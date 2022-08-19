#include<bits/stdc++.h>
using namespace std;

void Array(int array[],int size,int position)
{
    int count=0;
    for(int i=0; i<position; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(array[j]<array[j+1])
            {
                count++;
                for(int k=j; k<size-1; k++)
                {
                    array[k] = array[k+1];
                }
               break;
            }

        }
    }

}

int main()
{
    int size;
    cin>>size;
    int array[size] = {0};
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    int k;
    cin>>k;
    Array(array,size,k);
    for(int i=0; i<size-k; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}
