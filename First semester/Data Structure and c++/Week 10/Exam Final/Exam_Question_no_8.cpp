#include <bits/stdc++.h>
using namespace std;

int precision_cal(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '-' || c == '+')
        return 1;
    else
        return -1;
}

string infix_To_Prefix(string check)
{
    cout << "Infix: " << check << endl;
    reverse(check.begin(), check.end());
    cout << "Reverse Infix: " << check << endl;
    stack<char> st;
    string result;
    string str;
    for (int i = 0; i < check.length(); i++)
    {
        if (check[i] >= '0' && check[i] <= '9')
            result += check[i];
        else if (check[i] == ')')
        {
            st.push(check[i]);
            str.push_back(check[i]);
        }
        else if (check[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                result += st.top();
                st.pop();
                str.pop_back();
            }
            if (!st.empty())
            {
                st.pop();
                str.pop_back();
            }
        }
        else
        {
            while (!st.empty() && precision_cal(st.top()) >= precision_cal(check[i]))
            {
                result += st.top();
                st.pop();
                str.pop_back();
            }
            st.push(check[i]);
            str.push_back(check[i]);
        }

        // cout<<i<<" steps Stack :   "<<str<<"   => Console : "<<result<<endl;
    }
    while (!st.empty())
    {
        result += st.top();
        st.pop();
        str.pop_back();
    }
    //  cout<<check.length()<<" steps Stack :   "<<str<<"   => Console : "<<result<<endl;
    reverse(result.begin(), result.end());
    // cout<<"Prefix  : "<<result<<endl;
    return result;
}

void Print_vector(vector<int> v)
{
    for(int vc:v)
    cout<<vc<<" ";
}

int prefix_Evaluation(string check)
{
    stack<int> st;
    vector<int> ve;
    for (int i = check.size() - 1; i >= 0; i--)
    {
        /// Check[i] 0 to 9 ==> Operand
        if (check[i] >= '0' && check[i] <= '9')
        {
            st.push(check[i] - '0');
            ve.push_back(check[i] - '0');
        }
        else /// Check [i] ==> Operator
        {
            int a = st.top();
            st.pop();
            ve.pop_back();
            int b = st.top();
            st.pop();
            ve.pop_back();

            switch (check[i])
            {
            case '-':
                st.push(a - b);
                ve.push_back(a - b);
                break;
            case '+':
                st.push(a + b);
                ve.push_back(a + b);
                break;
            case '*':
                st.push(a * b);
                ve.push_back(a * b);
                break;
            case '/':
                st.push(a / b);
                ve.push_back(a / b);
                break;
            case '^':
                st.push(pow(a, b));
                ve.push_back(pow(a,b));
                break;
            default:
                break;
            }
        }
    cout<<check.size()-i<<" steps Stack :   ";
        Print_vector(ve);
        cout<<endl;

    }

    return st.top();
}

int main()
{
    string infix = "(5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))";
    string prefix;
    prefix = infix_To_Prefix(infix);
    cout << endl
         << prefix << endl
         << endl;
    cout << endl
         << prefix_Evaluation(prefix) << endl;
}