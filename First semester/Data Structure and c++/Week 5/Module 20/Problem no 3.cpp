#include<bits/stdc++.h>
using namespace std;

int Binarry_search(int array[],int value,int left,int right)
{
    if(left<=right)
    {
        int mid;
        mid = (left + right)/2;
        if(array[mid] == value) return mid+1;
        else if(array[mid]>value)
        {
            Binarry_search(array,value,left,mid-1);
        }
        else
        {
            Binarry_search(array,value,mid+1,right);
        }
    }
    else return -1;

}

int main()
{
    int n,m;
    cin>>n>>m;
    int array[n] = {0};
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    int low,high;
    low = 0,high = n-1;
    int mid = Binarry_search(array,m,low,high);
    cout<<mid<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<" ";
    }
}
