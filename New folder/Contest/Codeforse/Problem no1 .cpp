#include<bits/stdc++.h>
using namespace std;
int main()
{

    int size;
    cin>>size;
    int array[size]= {0};
    for(int i=0; i<size; i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cin.get();
        if(s == "Timur" ||s == "miurT" ||s == "Trumi"|| s == "mriTu")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
