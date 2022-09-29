#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;

        for (int i = n; i <= m; i++)
        {
            int temp = i;
            int half = temp / 2;
            int flag = 0;
            if(temp == 1) continue;
            for (int j = 2; j <= half; j++)
            {
                if (temp % j == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 0)
            {
                ++count;
            }
        }
            cout << count << endl;
    }
    return 0;
}
