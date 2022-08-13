#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr=new int[10]{0};

    for(int i=0;i<10;i++)
    {
        cout<<ptr[i]<<endl;
    }
    delete ptr;
    return 0;
}
