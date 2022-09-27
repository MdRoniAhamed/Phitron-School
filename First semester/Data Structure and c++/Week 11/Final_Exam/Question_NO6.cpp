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
        queue<char> q;
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            q.push(c);
        }
        int size = q.size() / 2;
        stack<char> st;
        for (int j = 0; j < size; j++)
        {
            char c = q.front();
            q.pop();
            char d = q.front();
            q.pop();
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
        if (!q.empty())
        {

            if (st.empty())
            {
                st.push(q.front());
            }
            else if (st.top() != q.front())
                st.push(q.front());
            else if (st.top() == q.front())
                st.pop();
            q.pop();
        }

        string s="";
        while(!st.empty())
        {
            s+=st.top();
            st.pop();

        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }

    return 0;
}