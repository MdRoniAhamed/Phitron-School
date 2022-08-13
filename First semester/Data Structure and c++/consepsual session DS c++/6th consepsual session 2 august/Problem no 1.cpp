#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a, max(b,c))
#define fixed(x)    fixed<<setprecisiion(x)
#define mem(a,b)    memset(a, b, sizeof(a))


///Use code define
#define ll long long
#define lli unsigned long long int
#define el '\n'


#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.text", "r",stdin);freopen("output.txt","w",stdout);


//const double PI = 3.141592653589793238462643383279;
//const ll INF = 1e9;
//const ll LINF = 1e18;
//const ll MOD = 1e9+7;
//const int mx = 1e5+123;


void CodeEngine(ll conseno)
{
    ll n,m,a,b,c,x,y,z,p,q,r,k;
    cin>>n>>k;
    ll arr[n+1];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    ll ans =0;
    ll current = 0;
    ll left =0;
    for(ll i=0; i<n; i++)
    {
        current = current | arr[i];

        if(current>=k)
        {
            ans+=(n-i);
            ll curTemp =0;
            ll tempR=i;

            while(tempR>=left)
            {
                if((curTemp|arr[tempR])>=k)
                {
                    break;
                }
                else
                {
                    curTemp = curTemp|arr[tempR];
                }
                tempR--;
            }

            ans += (tempR-left)*(n-i);
            left = tempR+1;
            current = curTemp;


        }

    }

    cout<<ans<<el;
}
int main()
{
    optimize();
    ll t;;
    cin>>t;
    //t=1;
    for(ll CaseNo=1; CaseNo<=t; CaseNo++)
    {
        CodeEngine(CaseNo);
    }

    return 0;
}
