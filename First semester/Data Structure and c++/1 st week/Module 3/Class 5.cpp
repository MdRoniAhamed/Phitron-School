#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5]= {5,4,3,2,1};
    int mn=ar[0];
    for(int i=1; i<5; i++)
    {
//        if(ar[i]<mn)
//        {
//            mn=ar[i];
//        }
        mn=max(mn,ar[i]);
        cout<<"index-"<<i<<"-> "<<mn<<endl;
    }
    cout<<mn<<endl;
    return 0;
}
