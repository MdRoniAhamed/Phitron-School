#include<bits/stdc++.h>
using namespace std;
#include"MYSTACK.h"

int precision_cal(char c)
{
    if(c=='^') return 3;
    else if(c == '/' || c == '*') return 2;
    else if (c == '-' || c == '+') return 1;
    else return -1;
}

string infixToPefix(string check)
{
    reverse(check.begin(),check.end());
    Stack<char> st;
    string result;
    for(int i=0; i<check.length(); i++)
    {
        if(check[i] >= '0' && check[i] <= '9') result+=check[i];
        else if(check[i]==')') st.Push(check[i]);
        else if(check[i]=='(')
        {
            while(!st.empty()&&st.Top()!=')')
            {
                result+=st.POP();
            }
            if(!st.empty()) st.POP();
        }
        else{
            while(!st.empty() &&  precision_cal(st.Top())>=  precision_cal(check[i]))
            {
                result+=st.POP();
            }
            st.Push(check[i]);
        }
    }
    while(!st.empty())
    {
        result+=st.POP();
    }
    reverse(result.begin(),result.end());
    return result;
}


int prefix_Evaluation(string check)
{
    Stack<int> st;
    for(int i = check.size()-1; i>=0; i--)
    {
        /// Check[i] 0 to 9 ==> Operand
        if(check[i] >= '0' && check[i] <= '9')
        {
            st.Push(check[i]-'0');
        }
        else ///Check [i] ==> Operator
        {
            int a = st.POP();
            int b = st.POP();

            switch (check[i])
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

/*
+*432
-+7*45+20
*/
int main()
{
    string infix = "(7+(4*5))-(2+0)";
    string prefix;
    prefix = infixToPefix(infix);

    cout<<endl<<prefix<<endl<<endl;
    cout<<endl<<prefix_Evaluation(prefix) <<endl;

}

