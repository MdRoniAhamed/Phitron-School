#include<bits/stdc++.h>
using namespace std;
int main()
{
//    string st="Hello"; ///first string.
//    st.assign("HI Toya.");
//    string st1="HI Fariya ";///2nd string.
//    st.append(st1); ///connect 2 string = append(st1/string);
//    cout<<st<<endl;
//    return 0;
    ///push_back;
    string st1 = "abcd";
    st1.push_back('R'); ///add to last element.
    cout<<st1<<endl;
    ///Pop_back
    st1.pop_back();/// Delete to last element string.
    cout<<st1<<endl;
    ///Insert
    st1.insert(2,"Roni"); ///add position 3 thaka Roni string.
    cout<<st1<<endl;
    ///Delete
    st1.erase(4,2);
    cout<<st1<<endl;
    ///swap
    string st2="Hello";
    swap(st1,st2);
    cout<<st1<<" "<<st2<<endl;

    return 0;
}
