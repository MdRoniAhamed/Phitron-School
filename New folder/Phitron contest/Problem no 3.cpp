#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int tom =0;
    int count=0;
    for(int i=0; i<t; i++)
    {
        tom=0;
        count=0;
        string str;
        cin>>str;
        int n=0;
        for(int j=str.size()-1; j>=0; j--)
        {
            if(str[j]=='1')
            {
                if(tom==0) count++;
                n++;
            }

            if(str[j]=='0'&&n!=0)
            {
                if(tom==0) tom=1;
                else tom=0;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}

