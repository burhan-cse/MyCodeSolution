#include<bits/stdc++.h>
typedef long long ll ;
using namespace std;

vector<ll>v;
void ck()
{
    ll x =2;
    while(x<10000000000)
    {
        v.push_back(x);
        x*=2;
    }
}
int main()
{
    ck() ;
    ll n, x, y, cnt = 0;
    cin>>n;
    ll arr[n+2];
    map<ll, int>mp;
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(int i = 0; i<n; i++)
    {
        x = 0;
        for(int j = 0; j<33; j++)
        {
            y = v[j]-arr[i];
            if(mp[y]>0 && y>0)
            {
               // cout<<arr[i]<<" "<<y<<" "<<mp[y]<<endl;
                if(arr[i]!=y || mp[y]>1)
                {
                    x = 1;
                    break;
                }
            }

        }
        if(x==0)
            cnt++;
    }
    cout<<cnt<<endl;
}
