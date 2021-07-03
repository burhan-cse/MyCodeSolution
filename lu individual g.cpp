#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x;
    vector<int>v;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i = 0; i<n+n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        x = 0;
        for(int i = 0; i<n; i++)x = max(x, v[i]+v[n+n-i-1]);
        cout<<x<<endl;
        v.clear();
    }
}
