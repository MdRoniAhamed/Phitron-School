#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size] = {0};
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    sort(array,array+size);
    int count=0,max=0;
    for(int i=0; i<size; i++)
    {
        if(max<array[i])
        {
            max = array[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
