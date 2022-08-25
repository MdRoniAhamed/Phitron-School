#include<bits/stdc++.h>
using namespace std;

void Sieve_of_Eratisthenes(int n)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==true)
        {
            for(int p = i*i;  p<=n; p+=i)
            {
                prime[p] = false;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==true)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n = 30;
    cout<<"Following are the prime numbers smaller "
        <<"than or equal to "<<n << endl;
    Sieve_of_Eratisthenes(n);

    return 0;
}
