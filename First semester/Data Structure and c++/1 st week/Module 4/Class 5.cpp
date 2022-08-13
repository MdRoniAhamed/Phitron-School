#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int ar[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>ar[i][j];
        }
    }

    if(row!=col)
    {
//        cout<< "Roni";
        cout<< "NO"<<endl;
        return 0;
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j)continue;

            if(ar[i][j]>0)
            {
                cout<< "No\n";

                return 0;
            }
        }
    }

    int save=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j){
            if(i==0&&j==0) save = ar[i][j];
            else{
                if(save!=ar[i][j])
                {
                    cout<< "Not scalar 2D array." <<endl;
                    return 0;
                }
            }
            }
        }
    }
    cout<<"YES,Scalar"<<endl;
    cout<<save<<endl;
    return 0;
}

