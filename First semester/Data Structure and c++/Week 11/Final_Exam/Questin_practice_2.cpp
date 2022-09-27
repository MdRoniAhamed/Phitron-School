#include<bits/stdc++.h>
using namespace std;

int main()
{
     int m;
    cin >> m;

    vector<int> ve;
    ve.push_back(m);
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
           ve.push_back(n);
        }
        if (m != -1)
        {
            q.push(m);
            ve.push_back(m);
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
           ve.push_back(a);
            break;
        case 2:
            sort(ve.begin(),ve.end());
            cout <<ve[ve.size()-1] << endl;
            int b ;
            b = ve.size()-1;
            ve.pop_back();
            break;
        default :
            break;
        }
    }


}