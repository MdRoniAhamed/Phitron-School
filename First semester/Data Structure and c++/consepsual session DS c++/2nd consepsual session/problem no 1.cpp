#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    string str[row+1];
    for(int i=0; i<row; i++)
    {
        cin>>str[i];
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            int coun=0;
            if(str[i][j]=='.')
            {
                if((str[i][j+1]=='#')&&(j+1<=col-1))
                {
                    coun++;
                }
                //2
                if((str[i][j-1]=='#')&&(j-1>=0))coun++;
                if((str[i-1][j]=='#')&&(i-1>=0))coun++;
                if((str[i+1][j]=='#')&&(i+1<=row))coun++;
                if((str[i-1][j+1]=='#')&&(i-1>=0)&&(j+1<=col-1))coun++;
                if((str[i+1][j-1]=='#')&&(j-1>=0)&&(i+1<=row-1))coun++;
                if((str[i+1][j+1]=='#')&&(i+1<=row-1)&&(j+1<=col-1))coun++;
                if((str[i-1][j-1]=='#')&&(i-1>=0)&&(j-1>=0))coun++;
                cout<<coun;
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<endl;
    }
    return 0;
}
