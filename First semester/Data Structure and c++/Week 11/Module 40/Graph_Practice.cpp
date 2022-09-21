#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> NonWeightPair;
class Graph{
    int V;
    list<NonWeightPair> * adj;
    public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<NonWeightPair>  [V];
    }
    void AddGraph(int u,int b,int w)
    {
        adj[u].push_back(make_pair(b,w));
        adj[b].push_back(make_pair(u,w));
    }
    void Print_Graph(int w)
    {
        cout<<w<<": ";
        for(auto i=adj[w].begin(); i!=adj[w].end(); i++)
        {
            cout<<"("<<(*i).first<<", "<<(*i).second<<") ";
        }
        cout<<endl;
    }

};

int main()
{
    int V,E;
    cin>>V>>E;
    Graph g (V);
    for(int i=0; i<E; i++)
    {
        int u,b,w;
        cin>>u>>b>>w;
        g.AddGraph(u,b,w);

    }
    for(int i=0; i<V; i++)
    {
        g.Print_Graph(i);
        
    }

    return 0;
}