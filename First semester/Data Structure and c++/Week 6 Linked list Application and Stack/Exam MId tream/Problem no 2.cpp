#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;  ///Input A array size.
    int array[n];   ///Create A array.
    int MAX = 0;        ///MAX Value.
    for(int i=0; i<n; i++)
    {
        cin>>array[i];  ///Input array of A.
        if(MAX<array[i])
            MAX = array[i];  /// Store  max value.
    }
    int m;
    cin>>m;  /// Array B size input.
    int arr[m];  ///Array B declare .
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];    ///Array B input.
        if(MAX<arr[i])     ///Store MAX value.
            MAX = arr[i];
    }
    int frq[MAX+1] = {0};   ///Declare Frequency array.
    for(int i=0; i<m; i++)
    {
        frq[arr[i]]++;   ///Frequency array value++.
    }
    for(int i=0; i<n; i++)
    {
        if(frq[array[i]]<1) cout<<array[i]<<" ";  ///Check and Out put (A-B).
    }

    cout<<endl;

    return 0;
}
