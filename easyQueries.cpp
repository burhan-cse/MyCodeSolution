#include<bits/stdc++.h>
using namespace std;

long long ev[100009], od[100009];

int main()
{
    int n, q, ck, x, y;
    cin>>n>>q;
    long long arr[n+2];
    for(int i = 1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2)
        {
            od[i] = od[i-1]+arr[i];
            ev[i] = ev[i-1];
        }
        else
        {
            od[i] = od[i-1];
            ev[i] = ev[i-1]+arr[i];
        }
    }
    while(q--)
    {
        cin>>ck>>x>>y;
        if(ck)
        {
            cout<<(od[y]-od[x-1])%1000000007<<endl;
        }
        else
            cout<<(ev[y]-ev[x-1])%1000000007<<endl;
    }
}
