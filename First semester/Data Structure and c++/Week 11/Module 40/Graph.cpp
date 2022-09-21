// Module 40;
// Graph artical: https://iishanto.com/%E0%A6%97%E0%A7%8D%E0%A6%B0%E0%A6%BE%E0%A6%AB-%E0%A6%B0%E0%A6%BF%E0%A6%AA%E0%A7%8D%E0%A6%B0%E0%A7%87%E0%A6%9C%E0%A7%87%E0%A6%A8%E0%A7%8D%E0%A6%9F%E0%A7%87%E0%A6%B6%E0%A6%A8-adjacency-list-and-adjacenc/

#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> edgeWeightPair;
class Graph
{
    int V;
    list<edgeWeightPair> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<edgeWeightPair>[V];
    }

    void addEdge(int u, int b, int w)
    {
        adj[u].push_back(make_pair(b, w));
        adj[b].push_back(make_pair(u, w));
    }

    void Print_Neighbour(int chk)
    {
        cout << chk << ": ";
        for (auto i = adj[chk].begin(); i != adj[chk].end(); i++)
        {
            cout << "(" << (*i).first << ", " << (*i).second << ") ";
           
        }
    }
};
int main()
{
    int V, E;
    cin >> V >> E;
    Graph g(V);
    for (int i = 0; i < E; i++)
    {
        int u, b, w;
        cin >> u >> b >> w;
        g.addEdge(u,b,w);
    }
    for (int i = 0; i < V; i++)
    {
        g.Print_Neighbour(i);
        cout<<endl;
    }

    return 0;
}

/*

Bi-Directional Weighted Graph.
7 10
0 1 7
0 2 1
0 5 3
1 3 11
2 3 3
3 6 1
6 5 2
6 4 4
5 4 6
2 5 8

*/