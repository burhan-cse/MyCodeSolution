#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n, mx =0, x, cnt, sum = 0, y;
        cin>>n;
        int ar[n+2], ar1[n+2];
        for(int i = 0; i<=n; i++) ar[i] = 0, ar1[i] = 0;
        for(int i = 0; i<n; i++)
        {
            cin>>x>>y;
            mx = max(mx, x);
            ar[x]++;
            if(y==1)
                ar1[x]++;
        }
        sort(ar, ar+mx+1);
        sort(ar1, ar1+mx+1);
        for(int i = mx; i>0; i--)
        {
            cnt = ar[i];
            if(cnt==0)
                break;
            sum+=cnt;
            if(ar[i]<=ar[i-1])
                ar[i-1] = cnt -1;
        }
        cout<<sum<<endl;
        sum = 0;
        for(int i = mx; i>0; i--)
        {
            cnt = ar1[i];
            if(cnt==0)
                break;
            sum+=cnt;
            if(ar1[i]<=ar1[i-1])
                ar1[i-1] = cnt -1;
        }
        cout<<sum<<endl;
    }
}
