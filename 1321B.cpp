#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n, x, mx = 0;
    cin>>n;
    map<long long , long long>mp;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        mp[x-i]+=x;
        mx = max(mp[x-i], mx);
    }
    cout<<mx<<endl;
}
