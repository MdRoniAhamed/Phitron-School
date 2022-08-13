#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int ba=N/15;
    ba*=200;
    int paid=N*800-ba;
    cout<<paid<<endl;
    return 0;
}
