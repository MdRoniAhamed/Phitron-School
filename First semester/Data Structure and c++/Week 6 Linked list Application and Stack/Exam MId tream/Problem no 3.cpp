#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; ///The number of day input.
    for(int j=0; j<n; j++)
    {
        int size;
        cin>>size; ///The amount earned input day.
        int array[size]; /// earned amount array create.
        for(int i=0; i<size; i++)
        {
            cin>>array[i]; ///Input earned amount per day.
            if(i!=0)
            {
                array[i]+=array[i-1]; ///Amount earn prefix sum.
            }
        }
        int arr[size]; ///Spent Shopping create array.
        for(int i=0; i<size; i++)
        {
            cin>>arr[i]; ///Spent amount Shopping per day.
            if(i!=0)
            {
                arr[i]+=arr[i-1];  ///Amount Spent prefix sum.
            }
        }
        int q=0;  ///Input the number of queries.
        cin>>q;
        int qure[q] = {0};
        for(int i=0; i<q; i++)
        {
            int value;  ///the day of spent .
            cin>>value;
            int val = array[value] - arr[value];
            if(val<0) qure[i] = 0;  ///UPSET .
            else qure[i] = 1;   ///HAPPY.
        }
        for(int i=0; i<q; i++)
        {
            cout<<qure[i]<<" "; ///Output Happy and Upset value.
        }
        cout<<endl;
    }

    return 0;
}
