#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int n,e;
    cin>>n>>e;
    vector<int> ve(21,0);
    map<int,int> M;
    for(int i=0; i<e; i++)
    {
        int a,b;
        cin>>a>>b;
        M[a]=b; 
        M[b] = a;
        ve[a]++;
    }
   


}