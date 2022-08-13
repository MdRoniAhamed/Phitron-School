#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=2) cout<<2<<" ";
    if(n>=3) cout<<3<<" ";
    if(n>=5) cout<<5<<" ";
    if(n>=7) cout<<7<<" ";
    for(int i=2; i<n; i++)
    {
        if(i%2==0||i%3==0||i%5==0||i%7==0){

        }
        else{
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}

