#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, x, y , xx = 1000000000000, yy, zz;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>x>>y;
        yy = max(x, y);
        zz = min(x, y);
        if(xx>=yy)
            xx = yy;
        else if(xx>=zz)
            xx = zz;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }


    }
    cout<<"YES"<<endl;
}

