#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[101];
    cin>>str;
    int len = strlen(str);

    int len1=len-2;
    cout<<str[0]<<len1<<str[len-1]<<endl;

    return 0;
}
