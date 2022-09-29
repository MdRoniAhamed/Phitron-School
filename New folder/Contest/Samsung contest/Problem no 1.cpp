#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int row,col;
        cin>>row>>col;
        int count=0;
        int m = row%3;
         int k = col%3;
         int l = row - m;
         int h = col - k;
         int gon = l*h;
         count += gon/9;
        if(row%3 !=0)
        {
            count += col/3;
        }
        if(col%3!=0)
        {
            count += row/3;

        }
        if(row%3!=0&&col%3!=0)
        {
            count += 1;

        }
        cout<<count<<endl;
        count=0;

    }

    return 0;
}

