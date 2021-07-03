#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, mx = 0, mn,x;
    cin>>n>>m;
    for(int i = 0; i<n; i++)
    {
        mn = 1000000009;
        for(int j = 0; j<m; j++)
        {
            cin>>x;
            mn = min(mn, x);
        }
        mx = max(mx, mn);
    }
    cout<<mx<<endl;
}
