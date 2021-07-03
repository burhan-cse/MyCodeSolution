#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    map<int, int>mp;

    ll n, x, nn, y, z;

    cin>>n;
    nn = n+n;
    ll ar[nn+2];
    for(int i = 0; i<nn; i++)
    {
        cin>>ar[i];
        mp[ar[i]]++;
        if(mp[ar[i]]==n)
        {
            cout<<0<<endl;
            return  0;
        }
    }
    sort(ar, ar+nn);
    x = (ar[n-1]-ar[0]);
    x *= (ar[nn-1]-ar[n]);
    y = (ar[n]-ar[n-1]);
    y *= (ar[nn-1]- ar[0]);
    z = (ar[n]-ar[0]);
    z *= (ar[nn]-ar[n-1]);

    cout<<min(x, min(y, z))<<endl;
}
