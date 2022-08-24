#include<bits/stdc++.h>
using namespace std;
#include"MYSTACK.h"

bool balanced_Parenthesis(string s)
{
    int n = s.size();
    Stack<char> st;
    bool is_Balanced = true;

    if( s[0] == ')' || s[0]== '}' || s[0]==']')
        return false;

    for(int i = 0; i<n; i++)
    {
        // Opening Bracket --> ( { [
        if( s[i] == '(' || s[i]== '{' || s[i]=='[')
        {
            st.Push(s[i]);
        }
        else if( s[i] == ')')
        {
            if( st.Top() == '(')
            {
                st.POP();
            }
            else
            {
                is_Balanced = false;
                break;
            }
        }
        else if( s[i] == '}')
        {
            if( st.Top() == '{')
            {
                st.POP();
            }
            else
            {
                is_Balanced = false;
                break;
            }
        }
        else if( s[i] == ']')
        {
            if( st.Top() == '[')
            {
                st.POP();
            }
            else
            {
                is_Balanced = false;
                break;
            }
        }
    }

    if(!st.empty())
    {
        is_Balanced = false;
    }
    return is_Balanced;
}

int main()
{
    string chk;
    cin>>chk;
    if(balanced_Parenthesis(chk))  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
