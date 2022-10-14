
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    cin >> num;
    vector<string> str(num, "");
    int count = 0;
    for (int i = 0; i <= num; i++)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            string st;
            cin >> st;
            if (count != 0)
                str[count] += (st + str[count - 1]);
            else
                str[count] += st;
        }
        if (n == 2)
        {
            int m;
            cin>>m;
            int len = str[count].length();
            count++;
            for(int j=0; j<len-m; j++){
                str[count] += str[count-1][j];
            }
        }
        if (n == 3)
        {
            int m;
            cin>>m;
            m--;
            cout<<str[count][m]<<endl;
        }
        if (n == 4)
        {
            if(count!=0)
            {
                count--;
            }
        }
    }
    return 0;
}
