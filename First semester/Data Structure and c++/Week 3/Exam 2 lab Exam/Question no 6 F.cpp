#include<bits/stdc++.h>
using namespace std;
int main()
{
    int array[3];
    for(int i=0; i<3; i++)
    {
        cin>>array[i];
    }
    int count=0;
    for(int i=0; i<2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }

    }
    if(3-count!=0)
    {
        cout<<3-count<<endl;
    }
    else cout<<"1"<<endl;


    return 0;
}

