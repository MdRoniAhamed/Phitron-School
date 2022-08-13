#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int size,q;
        cin>>size>>q;
        int array[size];
        for(int j=0; j<size; j++)
        {
            cin>>array[j];
        }
        cout<<"Case "<<i<<":"<<endl;
        for(int j=0; j<q; j++)
        {
            int condition;
            cin>>condition;
            if(condition==1)
            {
                int print;
                cin>>print;
                cout<<array[print]<<endl;
                array[print] = 0;
            }
            else if(condition==2)
            {
                int add,value;
                cin>>add>>value;
                array[add] += value;
            }
            else
            {
                int first,last, sum=0;
                cin>>first>>last;
                for(int k=first; k<=last; k++)
                {
                    sum +=array[k];
                }
                cout<<sum<<endl;
            }
        }

    }

    return 0;
}

