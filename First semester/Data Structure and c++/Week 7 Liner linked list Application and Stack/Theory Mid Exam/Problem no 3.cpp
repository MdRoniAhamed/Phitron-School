#include<bits/stdc++.h>
using namespace std;

int Binary_search(int array[],int sc,int lf,int ri)
{
    if(lf<=ri)
    {
        int mid = (lf+ri)/2;
        cout<<"mid-> "<<mid<<" lf-> "<<lf<<" ri-> "<<ri<<endl;
        if(array[mid]==sc) return mid;
        else if(array[mid]>sc) Binary_search(array,sc,lf,mid-1);
        else Binary_search(array,sc,mid+1,ri);
    }
    else return -1;
}

int main()
{
    int size = 10;
    int array[size]= {1,2,4,9,12,14,16,21,32,35};
    int n;
    cin>>n;
    int lf=0,ri=9;
    int search = Binary_search(array,n,lf,ri);
    if(search!=-1)
    cout<<search<<endl;
    else cout<<"Invalid value not found"<<endl;



}
