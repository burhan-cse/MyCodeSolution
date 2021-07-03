#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, k, n, te = 1, ck = 0, mn = 10000000000, zero = 0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        mn = 10000000000;
        pair<long long, long long>p[n+2], p1[n+2];
        for(int i = 0; i<n; i++)
        {
            cin>>p[i].first;
            cin>>p[i].second;

        }
        sort(p, p+n);

        for(int i = 0; i<=n-k; i++)
        {
            ck = 0, zero = 0;
            ck = p[i].second;
            for(int j = i+1; j<i+k; j++)
            {
                if(ck>p[j].first)
                    ck  = min(ck, p[j].second);
                else zero+=(p[j].first-ck), ck = p[j].first;

            }
            mn = min(mn, zero);

        }

        cout<<"Case "<<te++<<": "<<mn<<endl;
    }
}
