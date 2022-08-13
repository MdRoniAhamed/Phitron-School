#include<bits/stdc++.h>
using namespace std;
int main()
{
    int * p =new int[10];
    for(int i=0; i<1; i++)
    {
       cin>>p[i];
    }
     for(int i=0; i<10; i++)
    {
        cout<<p[i]<<endl;
    }
    delete(p);
    for(int i=0; i<10; i++)
    {
        cout<<p[i]<<endl;
    }
}
