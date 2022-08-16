#include<bits/stdc++.h>
using namespace std;
#include"MYSTACK.h"
/*
stack of float, double, char ,
string, array, structure, objects of class.


*/
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(4);

    while(!st.empty())
    {
        cout<< st.pop()<<endl;

    }
    cout<<st.size()<<endl;
    if(!st.empty()) ///st.Top()!=-1
    cout<<st.Top() <<endl;

    return 0;
}
