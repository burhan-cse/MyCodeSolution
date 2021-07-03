#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x, y, sum = 0;
    cin>>n>>m;
    int ar[n+2];
    for(int i = 1; i<=n; i++)cin>>ar[i];

    for(int i = 0; i<m; i++)
    {
        cin>>x>>y;
        sum+=min(ar[x], ar[y]);
    }
    cout<<sum<<endl;
}
