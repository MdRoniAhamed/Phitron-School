#include <bits/stdc++.h>
using namespace std;
vector<int> V[21];

vector<int> C[21];

void BFS(int source)
{
    vector<bool> visited(21, false);
    queue<int> q;
    visited[source] = true;
    int count = 0;
    C[count].push_back(source);
    q.push(source);
    q.push(-1);
    count++;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (u != -1)
        {
            for (auto element : V[u])
            {
                int v = element;
                if (visited[v] != true)
                {
                    C[count].push_back(v);
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
        else
        {
            count++;
            if (!q.empty())
            {
                q.push(-1);
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        V[a].push_back(b);
        V[b].push_back(a);
    }

    BFS(0);
    int level;
    cin >> level;

    if (C[level].size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int j = 0; j < C[level].size(); j++)
        {
            cout << C[level][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
/*
3 2
0 1
0 2
1

*/