#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,value;
    cin>>size>>value;
    int array[size];
    int count=0;
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(array[i]+array[j]==value)
            {
                count++;
            }
        }
    }

    cout<<count<<endl;
    return 0;
}
