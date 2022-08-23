#include<bits/stdc++.h>
using namespace std;
#include"MYSTACK.h"

int Prefix_Evaluation(string check)
{
    Stack<int> st;
    for(int i=check.size()-1; i>=0; i--)
    {
        if(check[i]>= '0' && check[i]<='9')
        {
            st.Push(check[i]-'0');
        }
        else
        {
            int a = st.POP();
            int b = st.POP();
            switch(check[i])
            {
            case '-':
                st.Push(a-b);
                break;
            case '+':
                st.Push(a+b);
                break;
            case '*':
                st.Push(a*b);
                break;
            case '/':
                st.Push(a/b);
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout<<Prefix_Evaluation("+*423")<<endl;

    cout<<endl;
}
