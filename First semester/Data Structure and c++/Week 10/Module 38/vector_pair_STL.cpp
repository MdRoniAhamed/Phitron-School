#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pair;
int main()
{
    vector<int> v(3, -1);
    priority_queue <Pair,vector<Pair>/*,greater<Pair>*/> pq;
    pq.push(make_pair(1,9));
    pq.push(make_pair(6,2));
    pq.push(make_pair(4,1));

    cout<<endl<<endl;
    while(!pq.empty())
    {
        cout<<pq.top().first<<" | "<< pq.top().second<<endl;
        pq.pop();
    }

    cout<<endl<<endl;
    return 0;
}