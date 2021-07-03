#include<bits/stdc++.h>
using namespace std;
int t, n, x, ar[105];

int main()
{
    cin>>t;
    while(t--)
    {
        int sum = 0;
        cin>>n>>x;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum==x)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        sum = 0;
        for(int i = 0; i<n; i++)
        {
            if(ar[i]+sum==x) swap(ar[i], ar[i+1]);
            sum+=ar[i];
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }

}
