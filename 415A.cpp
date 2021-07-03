#include<bits/stdc++.h>
using namespace std;
int ar[100];
int main()
{
    int n, m, x, ind;
    cin>>n>>m;
    for(int i = 0; i<m; i++)
    {
        cin>>x;
        ind = x;
        while(x<=n&&ar[x]==0) ar[x++] = ind;
    }
    for(int i = 1; i<=n; i++)cout<<ar[i]<<" ";

}
