#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }

    int check,co=0;
    cin>>check;

    bool found = true ;

    for(int i=0;i<size; i++)
    {
        if(check == array[i])
        {
            if(co==0)
            {
                cout<<"FOUND at index positin: ";
            }
            if(co>0) cout<<",";
            cout<<i;
            co++;
            found = false;
        }
    }
    if(found)
    {
        cout<< "NOT FOUND"<<endl;
    }
    cout<<endl;
    return 0;
}
