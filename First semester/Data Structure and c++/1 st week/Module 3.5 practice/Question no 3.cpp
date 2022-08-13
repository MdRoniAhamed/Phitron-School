#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[100000];
    cin>>str;
    int len =strlen(str);
    len++;
    int counts[123]={0};
    for(int i=0;i<=len;i++)
    {
        counts[str[i]]++;
    }
    for(int i='a';i<='z';i++)
    {
        if(counts[i]==0)
        {
            char u=i;
            cout<<u<<endl;
           return 0;
        }

    }
    cout<<"None"<<endl;
    return 0;

}
