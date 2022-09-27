#include<bits/stdc++.h>
using namespace std;
vector<int> V[190];
bool visited[191];
int sum = 0;

void DFS(int source)
{
   
    // cout<<source<<" " ;
    visited[source] = true;
    for(int i=0; i<V[source].size(); i++)
    {
        int child = V[source][i];
        if(visited[child] == false)
        {

        DFS(child);
        sum++;
        }
    }

}


int main()
{
    int m,n;
    cin>>m>>n;
    map<int,int> M;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
       V[a].push_back(b);
    }

    memset(visited,false,sizeof(visited));
    int k;
    cin>>k;
    DFS(k);
    cout<<sum<<endl;

    return 0;
}
/*
6 5
0 1
0 2
0 3
2 3
4 5
2
*/