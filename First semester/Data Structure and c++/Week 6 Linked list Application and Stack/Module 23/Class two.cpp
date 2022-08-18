#include<bits/stdc++.h>
#include "Class-2.h";
using namespace std;
int main()
{
    Stack <pair<int,char>> st;
    st.push(make_pair(1,'a'));
    st.push(make_pair(2,'b'));
    st.push(make_pair(3,'c'));
//     cout << st.pop() << endl;
//      cout << st.pop() << endl;
//       cout << st.pop() << endl;
//    while(!st.empty())
//    {
//        pair<int,char>chk;
//        chk = st.pop();
//        cout<<chk.first<<" | "<<chk.second<<endl;
////        cout << st.pop() << endl;
//    }
    cout<<st.size() <<endl;
    if(!st.empty())
    {
        pair<int,char>chk;
        chk = st.pop();
        cout<<chk.first<<" | "<<chk.second<<endl;
    }
//    cout<<st.top() <<endl;

    return 0;
}
