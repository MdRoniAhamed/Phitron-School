#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> Pair;
int main()
{
    int k;
    cin>>k;
    vector<vector<int>> all_values(k);

    for(int i=0; i<k; i++)
    {
        int size;
        cin>>size;
        all_values[i] = vector<int>(size);
        for(int k=0; k<size; k++)
        {
            cin>>all_values[i][k];
        }

    }

    vector<int> index_tracker(k,0);
    priority_queue<Pair,vector<Pair>,greater<Pair>> pq;
    for(int i=0; i<k; i++)
    {
        pq.push(make_pair(all_values[i][0],i));
    }
    vector<int>ans;
    while(!pq.empty())
    {
        Pair x = pq.top();
        pq.pop();
        ans.push_back(x.first);
        if(index_tracker[x.second]+1<all_values[x.second].size())
        {
            pq.push(make_pair(all_values[x.second][index_tracker[x.second]+1],x.second));
        }
        index_tracker[x.second] +=1;
    }
    for(auto element: ans)
    {
        cout<<element<<' ';
    }

    cout<<endl;



    return 0;
}
/*

3 ->K
3 -> size of array 1
3
3
1 4 7
2
3 5
3
2 6 7

*/