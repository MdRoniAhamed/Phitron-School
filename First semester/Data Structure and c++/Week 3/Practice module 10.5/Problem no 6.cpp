#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size,size1;
    cin>>size;

    int array[size];
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }

    cin>>size1;
    int arr[size1];
    for(int i=0; i<size1; i++)
    {
        cin>>arr[i];
    }

    int found=0;

    for(int i=0; i<size; i++)
    {
        for(int j=0;j<size1;j++)
        {
            if(array[i]==arr[j])
            {
                found++;
                cout<<array[i]<<" ";
                break;
            }
        }
    }
    if(found<=0)
    {
        cout<<"Empty set"<<endl;
    }
    cout<<endl;

    return 0;
}
