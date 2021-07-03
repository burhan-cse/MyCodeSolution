#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, a, b, c, r;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>r;
        int ans = b-a;
        if(c-r>b || c+r< a)
            ans = b-a;
        else if(c+r<=b && c-r>=a)
            ans-=2*r;
        else if(c-r<=a && c+r>=b)
            ans = 0;
        else if(c+r>=b && c-r>)
        else if(c<b && c+r>=b)
            ans=-(b-c);
        else if()
    }

}
