#include<bits/stdc++.h>
using namespace std;
void Print_array_sum(int n)
{
    cout<<n<<endl;
}
int main()
{
    int n;
   // cout<<"Please input array size"<<endl;
    cin>>n;

    int array[n];
    //cout<<"Please Inter array value: "<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
        sum+=array[i];
    }
    Print_array_sum(sum);
}
