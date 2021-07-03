#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, ans =1;
    cin>>n;
    while(ans*2<=n)
        ans*=2;
    cout<<ans-1<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--) solve();
}
