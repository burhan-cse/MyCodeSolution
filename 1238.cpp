#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x, y;
        cin>>x>>y;
        x-=y;
        if(x==1)
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
}
