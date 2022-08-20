#include<bits/stdc++.h>
#include"STACK.h"
using namespace std;
int main()
{
    Stack<char> st;
    string s;
    cin>>s;
    int n = s.size();

    for(int i=0; i<n; i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else if(st.top()=='('&&s[i]==')'||st.top()=='{'&&s[i]=='}'||st.top()=='['&&s[i]==']')
        {
            st.pop();
        }
        else{
            st.push(s[i]);
        }
    }

    if(st.empty())
    {
        cout<<"Right"<<endl;
    }
    else cout<<"Wrong"<<endl;

    return 0;
}

