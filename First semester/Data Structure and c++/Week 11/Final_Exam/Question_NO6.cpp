#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        queue<char> Qu;
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            Qu.push(c);
        }
        int size = Qu.size() / 2;
        stack<char> st;
        for (int j = 0; j < size; j++)
        {
            char c = Qu.front();
            Qu.pop();
            char d = Qu.front();
            Qu.pop();
            if ((c == 'R' && d == 'B') || (c == 'B' && d == 'R'))
            {
                if (st.empty())
                {
                    st.push('P');
                }
                else if (st.top() != 'P')
                    st.push('P');
                else if (st.top() == 'P')
                    st.pop();
            }
            else if ((c == 'R' && d == 'G') || (c == 'G' && d == 'R'))
            {
                if (st.empty())
                {
                    st.push('Y');
                }
                else if (st.top() != 'Y')
                    st.push('Y');
                else if (st.top() == 'Y')
                    st.pop();
            }
            else if ((c == 'B' && d == 'G') || (c == 'G' && d == 'B'))
            {
                if (st.empty())
                {
                    st.push('C');
                }
                else if (st.top() != 'C')
                    st.push('C');
                else if (st.top() == 'C')
                    st.pop();
            }
        }
        if (!Qu.empty())
        {

            if (st.empty())
            {
                st.push(Qu.front());
            }
            else if (st.top() != Qu.front())
                st.push(Qu.front());
            else if (st.top() == Qu.front())
                st.pop();
            Qu.pop();
        }
        string str = "";
        while (!st.empty())
        {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        cout << str << endl;
    }

    return 0;
}