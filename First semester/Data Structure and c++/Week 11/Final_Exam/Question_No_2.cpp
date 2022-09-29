#include <bits/stdc++.h>
using namespace std;
vector<int> V[21];

vector<int> C[21];

void Best(int sourse)
{
    vector<bool> visi(21, false);
    queue<int> Qu;
    visi[sourse] = true;
    int cou = 0;
    C[cou].push_back(sourse);
    Qu.push(sourse);
    Qu.push(-1);
    cou++;
    while (!Qu.empty())
    {
        int u = Qu.front();
        Qu.pop();
        if (u != -1)
        {
            for (auto element : V[u])
            {
                int v = element;
                if (visi[v] != true)
                {
                    C[cou].push_back(v);
                    visi[v] = true;
                    Qu.push(v);
                }
            }
        }
        else
        {
            cou++;
            if (!Qu.empty())
            {
                Qu.push(-1);
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

    Best(0);
    int Lev;
    cin >> Lev;
    if (C[Lev].size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int j = 0; j < C[Lev].size(); j++)
        {
            cout << C[Lev][j] << " ";
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