#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PAIR;
int main()
{
   
    priority_queue <PAIR,vector<int>> PQ;
     int m;
    cin >> m;

   PQ.push(m);
    queue<int > Q;
    Q.push(m);

    while (!Q.empty())
    {
        int newNode = Q.front();
        Q.pop();
        int n;
        cin >> n >> m;
        if (n != -1)
        {
           Q.push(n);
           PQ.push(n);
        }
        if (m != -1)
        {
            Q.push(m);
           PQ.push(m);
        }
      
    }

     int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> m;
        switch (m)
        {
        case 1:
            int g;
            cin >> g;
          PQ.push(g);
            break;
        case 2:
            cout <<PQ.top()<< endl;
            PQ.pop();
            break;
        default :
            break;
        }
    }
    cout<<endl;
    return 0;
}