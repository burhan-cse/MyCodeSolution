#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, mx = 0;

    cin>>n>>k;
    map<int, int>mp;
    map<int, int>iterator :: it;
    int arr[n+2], ar[n+2];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        a[i] = arr[i];
    }
    for(int i = 0; i<n ; i++)
    {
        cin>>ar[i];
        mp[arr[i]] = ar[i];
    }
    sort(a, a+n);
    for(it = mp.begin(); it!=mp.end(); it++)
    {
        mx = max(mx, it->second);
        it->second = mx;
    }
}
