#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>k;
        cout<< (((a*b)-1 == k) ? "YES" : "NO") << '\n';
    }
}
