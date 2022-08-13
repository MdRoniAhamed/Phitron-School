#include<bits/stdc++.h>
using namespace std;
int sort_array(int size,int array[])
{
    int count=0;
    for(int i=1; i<size; i++)
    {
        int key= array[i];
        int k = i-1;
        while(k>=0&&array[k]>key)
        {
            array[k+1] = array[k];
            k--;
            count++;
        }
        array[k+1] = key;
    }
    return count;
}
int search_array(int size,int array[],int value)
{
    for(int i=0; i<size; i++)
    {
        if(array[i]==value)
        {
            return i;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int size;
        cin>>size;
        int array[size];
        int value=0;
        for(int j=0; j<size; j++)
        {
            cin>>array[j];
            int c = array[j] - j;
            if(value<c)
            {
                value=c;
            }
        }
        int count = sort_array(size,array);
//        Print_array(size,arr);

//        value;
        if(value<=3)
        {
            cout<<count<<endl;
        }
        else
        {
            cout<<"Not Allowed"<<endl;
        }

    }
    return 0;
}
