#include<bits/stdc++.h>
using namespace std;
#define ll double
void Reverse_Root()
{
    ll root;
    if(scanf("%lf",&root) != 1) return ;
    Reverse_Root();
    printf("%.4lf\n",sqrt(root));


};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    Reverse_Root();

}
