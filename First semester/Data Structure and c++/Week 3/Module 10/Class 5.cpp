#include<bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int x, int lb, int ub)
{
    if(lb<=ub)
    {
        int mid= (lb+ub)/2;
        if(x==array[mid]) return mid;
        else if(x>array[mid]) binarySearch(array,x,mid+1,ub);
        else binarySearch(array,x,lb,mid-1);
    }
    else return -1;
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

    int check_value;
    cout<<"Please Enter the value You want to Search: ";
    cin>>check_value;

    int index_Number;
    index_Number = binarySearch(array,check_value,0,size-1);

    if(index_Number!=-1)
    {
        cout<<"Index No: "<< index_Number<< " Position No: "<<index_Number+1<<endl;
    }
    else {
        cout<<"NOT FOUND"<<endl;
    }



    return 0;
}
