#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[11],b[11],c[11];
    cin>>a>>b>>c;
    int len=strlen(a);
    int len1=strlen(b);

    if(a[len-1]==b[0])
    {

        if(b[len1-1]==c[0])
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
