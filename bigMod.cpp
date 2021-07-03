#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll mul(ll x, ll n, ll c)
{
    if(n==0) return 0;
    ll p = mul(x, n/2, c)%c;
    if(n%2==0)
        return (p+p)%c;
    else
        return (x+p+p)%c;
}


ll bigMod(ll x, ll n, ll c)
{
    if(n==0) return 1;
    ll p = bigMod(x, n/2, c)%c;
    if(n%2==0)
        return mul(p,p,c)%c;
    else
    {
        p =mul(p,p,c);
        return mul(x,p,c);
    }
}

int main()
{
    ll t, x, n, c, te = 1;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>c;
        cout<<"Case "<<te++<<": "<<bigMod(x,n,c)<<endl;
    }
}
