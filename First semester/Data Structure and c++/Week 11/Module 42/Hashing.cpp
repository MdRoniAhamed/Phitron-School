#include<bits/stdc++.h>
using namespace std;

int main()
{
    // map<int,int> M;
    unordered_map<int,int> M;
    M[3] = 9;
    M[2] = 7;
    M[2] = 10;
    M.insert(make_pair(1,4));
    M.insert({6,10});

    cout<<"Key"<<" | "<<"Value: "<<endl;
    for(auto i: M)
    {
        cout<<i.first <<" | "<<i.second<<endl;
    }

    return 0;
}
