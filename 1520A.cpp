#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string s;
    cin>>t;
    map<char, bool>mp;
    while(t--)
    {
        bool ans = 0;
        mp.clear();
        cin>>n>>s;
        mp[s[0]] = 1;
        for(int i=1; i<n; i++)
        {
            if(s[i]==s[i-1]) continue;
            if(mp[s[i]])
                ans = 1;
            mp[s[i]] = 1;
        }
        if(ans) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
