#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;

    for(int i=0; i<size; i++)
    {
        int odd=0,even=0;
        int n;
        cin>>n;
        n *=2;
        int array[n+1];
        for(int i=0; i<n; i++)
        {

            cin>>array[i];
            if(array[i]%2==0) even++;
            else odd++;

        }
        if(odd==even)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}

