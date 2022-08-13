#include<bits/stdc++.h>
using namespace std;
class Example
{
public:
    int x;
    Example (int a)
    {
        x=a;
    }
    int operator +(Example obj)
    {
        return  x+obj.x;
    }
};
int main()
{
    Example a(10),b(20),c(40);
    int ans=a+b;
    Example ansobj(ans);
    cout<<ansobj+c<<endl;
    return 0;
}
