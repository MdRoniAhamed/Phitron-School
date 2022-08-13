#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "How are you amit";
    ///Find;
    cout<<s.find('a')<<endl;
    ///find_first_of ba find same.
    cout<<s.find_first_of('a')<<endl;
    ///rfind;
    cout<<s.rfind('a')<<endl;
    ///find_last_of bought same rfind.
    cout<<s.find_last_of('a')<<endl;
    ///find_first_not_of
    cout<<s.find_first_not_of('a')<<endl;
    ///find_last_not_of
    cout<<s.find_last_not_of('a')<<endl;
    ///substring
    cout<<s.substr(4,3)<<endl;
    string sub = s.substr(2,6);
    cout<<sub<<endl;
    return 0;
}
