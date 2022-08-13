#include<bits/stdc++.h>
using namespace std;
int main()
{
    char o[51],e[51];
    cin>>o>>e;
    int len=strlen(o);
    int len1=strlen(e);
    if(len-len1==0)
    {
        for(int i=0; i<len; i++)
        {
            cout<<o[i]<<e[i];
        }
    }
    else{
       for(int i=0; i<len-1; i++)
        {
            cout<<o[i]<<e[i];
        }
        cout<<o[len-1];
    }
    cout<<endl;
    return 0;
}
