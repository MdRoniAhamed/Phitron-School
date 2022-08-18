#include<bits/stdc++.h>
using namespace std;
#include"Class-2.h"


void string_reverse(Stack<string> &st,string check)
{
    for(int i=0; i<check.length(); i++)
    {
        string word;
        while(i<check.length()&&check[i]!=' ')
        {
            word+= check[i];
            i++;

        }
        st.push(word);
    }

}
int main()
{
    string s;
    s = {"I am Roni"} ;
    Stack<string> st;
    string_reverse(st,s);

    while(!st.empty())
    {
        cout<<st.pop()<<endl;
    }

    return 0;

}
