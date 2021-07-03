#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long t, a, b, n, s;
    long long ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n>>s;
        ans = a * n;
        if(b>=s)
        {
            cout<<"YES"<<endl;
        }
        else if(a*n==s)
            cout<<"YES"<<endl;
        else if(a*n+b==s)
            cout<<"YES"<<endl;
        else if(s-ans>=0 && s-ans<b)
        {
            cout<<"YES"<<endl;
        }
        else if(a*n+b < s)
            cout<<"NO"<<endl;
        else
        {
            ans  = (s/n) * n ;
            if(s-ans <= b)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
