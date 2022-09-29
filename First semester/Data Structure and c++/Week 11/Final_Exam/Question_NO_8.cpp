#include <bits/stdc++.h>
using namespace std;
vector<int> V[190];
bool visited[191];
int sum = 0;

void DFS(int source)
{
    visited[source] = true;
    for (int i = 0; i < V[source].size(); i++)
    {
        int Chi = V[source][i];
        if (visited[Chi] == false)
        {

            DFS(Chi);
            sum++;
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    map<int, int> M;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        V[a].push_back(b);
    }
    memset(visited, false, sizeof(visited));
    int level;
    cin >> level;
    DFS(level);
    cout << sum << endl;
    return 0;
}
