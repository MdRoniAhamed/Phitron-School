#include<bits/stdc++.h>
using namespace std;
void Find_the_prime_number(int n)
{
    if(n>=2) cout<<2<<" ";
    if(n>=3) cout<<3<<" ";
    if(n>=5) cout<<5<<" ";
    if(n>=7) cout<<7<<" ";
    if(n>=11) cout<<11<<" ";
    for(int i=12; i<=n; i++)
    {
        if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0)
            cout<<i<<" ";
    }
}
int main()
{
    int n = 121;
    cout<<"Following are the prime numbers smaller "
        <<"than or equal to "<<n << endl;
   Find_the_prime_number(n);

    return 0;
}

