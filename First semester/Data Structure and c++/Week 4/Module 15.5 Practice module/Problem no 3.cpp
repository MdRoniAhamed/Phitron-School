#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int array[n][m];
    int max=0,max_row=0,max_column=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>array[i][j];
            if(array[i][j]>max)
            {
                max = array[i][j];
                max_row = i;
                max_column = j;
            }

        }
    }

    cout<<"Max: " <<max<<endl<<"Location: [" <<max_row<<"]" <<"["<<max_column<<"]"<<endl;

    return 0;
}
