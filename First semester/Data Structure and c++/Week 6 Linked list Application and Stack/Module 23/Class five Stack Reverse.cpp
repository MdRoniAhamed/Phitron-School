#include<bits/stdc++.h>
using namespace std;
#include"Class-2.h"

void insert_At_Bottom(Stack<int>&check,int check_Element)
{
    if(check.empty())
    {
        check.push(check_Element);
        return;
    }
    int top_Element = check.top();
    check.pop();
    insert_At_Bottom(check,check_Element);
    check.push(top_Element);

}

void reverse_Stack(Stack<int> & check)
{
    if(check.empty())
    {
        return;
    }
    int top_Element = check.top();
    check.pop();
    reverse_Stack(check);
    insert_At_Bottom(check,top_Element);
}

int main()
{
    Stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverse_Stack(st);

    while(!st.empty())
    {
        cout<<st.pop()<<endl;
    }

    return 0;
}
