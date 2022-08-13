#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    cin>>sentence;
    int len = sentence.find('A');
    int len2 = sentence.rfind('Z')+1;
    cout<<len2-len<<endl;
    return 0;
}
