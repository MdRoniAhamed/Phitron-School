#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100001];
    cin>>str;
    for(int i=0;i<strlen(str);i+=2){
        cout<<str[i];
    }
    cout<<endl;
    return 0;
}
