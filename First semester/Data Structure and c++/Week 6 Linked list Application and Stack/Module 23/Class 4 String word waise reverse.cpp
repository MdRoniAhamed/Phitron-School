#include<bits/stdc++.h>
#include"Class-2.h"
using namespace std;

void reverse_sentence(string check)
{
    Stack<string> st;
    for(int i=0; i<check.length(); i++)
    {
        string word = "";
        while(i<check.length()&&check[i]!=' ')
        {
            word+= check[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    string s = "I am Akib";
    reverse_sentence(s);
}
