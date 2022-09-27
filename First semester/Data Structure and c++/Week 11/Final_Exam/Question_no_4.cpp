#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pair;
int main()
{
   
    priority_queue <Pair,vector<int>/*,greater<Pair>*/> pq;
     int m;
    cin >> m;

   pq.push(m);
    queue<int > q;
    q.push(m);

    while (!q.empty())
    {
        int newNode = q.front();
        q.pop();
        int n;
        cin >> n >> m;
        if (n != -1)
        {
           q.push(n);
           pq.push(n);
        }
        if (m != -1)
        {
            q.push(m);
           pq.push(m);
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
            int a;
            cin >> a;
          pq.push(a);
            break;
        case 2:
            cout <<pq.top()<< endl;
            int b ;
            pq.pop();
            break;
        default :
            break;
        }
    }
    cout<<endl<<endl;
    return 0;
}