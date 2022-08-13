#include<bits/stdc++.h>
using namespace std;
namespace one
{
    int x=30;
    void fun()
    {
        cout<<"I am namespace one"<<endl;
    }
}
namespace two
{
    int x=20;
    void fun()
    {
        cout<< "I am namespace two"<<endl;
    }
}
using namespace one;
int main()
{
    cout<<two::x<<endl;
    return 0;
}
