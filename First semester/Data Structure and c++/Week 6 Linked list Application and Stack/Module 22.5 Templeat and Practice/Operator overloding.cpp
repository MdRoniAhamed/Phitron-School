#include<bits/stdc++.h>
using namespace std;
class Roni
{
public:
    int x;
    Roni(int x)
    {
        this->x = x;
    }
    int operator *(Roni R)
    {
        return R.x;
    }
};
int main()
{
    Roni a(25),b(30),c(40);
    int ans = a*b;
    cout<<ans<<endl;
    return 0;
}

