#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> Pair;
int main()
{
    int k;
    cin >> k;

    vector<vector<int>> all_values(k);

    //Input
    for (int i = 0; i < k; i++)
    {
        int size;
        cin >> size;
        all_values[i] = vector<int>(size);
        for (int k = 0; k < size; k++)
        {
            cin >> all_values[i][k];
        }
    }

    vector<int> index_tracker(k, 0);
    priority_queue<Pair, vector<Pair>, greater<Pair>> PQ;
    //Initialisation of PQ
    for (int i = 0; i < k; i++)
    {
        PQ.push(make_pair(all_values[i][0], i));
    }

    vector<int> ans;

    //Main Logic of Heap.
    while (!PQ.empty())
    {
        Pair x = PQ.top();
        PQ.pop();
        ans.push_back(x.first);

        if (index_tracker[x.second] + 1 < all_values[x.second].size()) // Increment position Validity Check.
        {
            PQ.push(make_pair(all_values[x.second][index_tracker[x.second] + 1], x.second));
            // We are Creating a pair: (increment position value, increment position array identity)
            // Then Push in PQ.
        }
        index_tracker[x.second] += 1;
    }

    //Print ans.
    for (auto element : ans)
    {
        cout << element << " ";
    }

    cout << endl
         << endl;

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