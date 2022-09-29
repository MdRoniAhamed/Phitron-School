#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int j=0; j<n; j++)
    {
        int m,k;
        cin>>m>>k;
        int count = 0;
        if(m<=2&&k>=2) count++; ;
        if(m<=3&&k>=3)  count++;
        if(m<=5&&k>=5) count++;
        if(m<=7&&k>=7)  count++;
        if(m<=11&&k>=11)  count++;
        if(m==1) m=2;
        for(int i=m; i<=k; i++)
        {
            if(i%2==0||i%3==0||i%5==0||i%7==0||i%11==0)
            {

            }
            else
            {
                cout<<i<<endl;
                count++;
            }
        }
        cout<<count<<endl;
    }


    return 0;
}

