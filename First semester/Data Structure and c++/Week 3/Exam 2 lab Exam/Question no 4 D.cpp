#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    for(int j=0; j<size; j++)
    {
        int n;
        cin>>n;
        int array[n];
        int frq[1001]={0};
        int value=0;
        for(int i=0; i<n; i++)
        {
            cin>>array[i];
            frq[array[i]]++;
            if(array[i]>value)
            {
                value=array[i];
            }
        }
        int high_value=0,count=0;
        for(int i=0; i<value+1;i++)
        {
            if(frq[i]>high_value)
            {
                high_value = frq[i];
                count =i;
            }
        }
        cout<<n-high_value<<endl;
    }

    return 0;
}

