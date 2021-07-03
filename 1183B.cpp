#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q, n, k;
    cin>>q;
    while(q--)
    {
        int mx = 0, mn = 100000009;
        cin>>n>>k;
        int arr[n+2];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            mn= min(mn, arr[i]);
            mx = max(mx, arr[i]);
        }
        int ans = (mx+mn+1)/2;
        ans = ans-mn;
        if(ans>k)
            cout<<-1<<endl;
        else
            cout<<mn+ans<<endl;
    }
}
