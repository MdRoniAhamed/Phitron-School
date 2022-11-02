#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    int count = 0;
    while(cin>>a>>b)
    {
        if (a == 0 || b == 0)
            break;
        count ++;
//        cout<<"CASE# "<<count<<":"<<endl;
        vector<int> ve;
        for (int i=0; i<a; i++)
        {
            int value;
            cin>>value;
            ve.push_back(value);
        }
        sort(ve.begin(),ve.end());

        for (int i=0; i< b; i++)
        {
            int low = 0;
            int hight = a-1;
            int ans = -1;
            int value;
            cin>>value;
            while(low <= hight)
            {
                int mid_idx = (low + hight) / 2;
                int mid_val = ve[mid_idx];
                if (value > mid_val)
                {
                    low = mid_idx + 1;
                }
                else if(mid_val > value)
                {
                    hight = mid_idx - 1;
                }
                else
                {
                    ans = mid_idx;
                    hight = mid_idx - 1;
                }
            }
            if (ans != -1)
            {
                cout<<value<<" found at "<<ans+1<<endl;
            }
            else
            {
                cout<<value<<" not found"<<endl;
            }
        }

    }
    return 0;
}
