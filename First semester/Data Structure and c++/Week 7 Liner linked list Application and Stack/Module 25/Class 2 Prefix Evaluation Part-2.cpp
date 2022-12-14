#include<bits/stdc++.h>
using namespace std;
#include"MYSTACK.h"

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
    string s;
    cin>>s;

    cout<<endl<<prefix_Evaluation(s)<<endl<<endl;
//    cout<<endl<<prefix_Evaluation("-+7*45+20")<<endl<<endl;

}
