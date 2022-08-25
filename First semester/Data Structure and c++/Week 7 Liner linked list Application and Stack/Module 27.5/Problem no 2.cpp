#include<bits/stdc++.h>
using namespace std;
#include"MYSTACK.h"

int Prefix_Evaluation(string s)
{
    Stack<int> st;

    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            st.Push(s[i]-'0');
        }
        else if(!st.empty()){
            int a = st.POP();
            int b = st.POP();

            switch(s[i])
            {
            case '-':
                st.Push(a-b);
                break;
            case '+':
                st.Push(a+b);
                break;
            case '/':
                st.Push(a/b);
                break;
            case '*':
                st.Push(a*b);
                break;
            case '^':
                st.Push(pow(a,b));
                break;
            default:
                break;
            }
        }
    }

    return st.Top();
}
int main()
{
    string s;
    cin>>s;
    int Prefix_sum = Prefix_Evaluation(s);
    cout<<Prefix_sum<<endl;

}
